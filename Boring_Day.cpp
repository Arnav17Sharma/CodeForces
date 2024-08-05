#include <iostream>
#include <vector>
#include <cstring>

const int MAX_N = 100005;
const int MOD = 1e9 + 7;
const int MAX_PRIME = 100;

std::vector<int> primes;
std::vector<int> graph[MAX_N];
long long dp[MAX_N][MAX_PRIME];

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Function to generate primes less than 100
void generatePrimes() {
    for (int i = 2; i < MAX_PRIME; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
}

// DFS function
long long dfs(int node, int parent, int parentValue) {
    long long result = 0;

    for (int prime : primes) {
        if (parentValue != -1 && isPrime(parentValue + prime)) continue;

        if (dp[node][prime] != -1) {
            result = (result + dp[node][prime]) % MOD;
            continue;
        }

        long long ways = 1;
        for (int child : graph[node]) {
            if (child == parent) continue;
            ways = (ways * dfs(child, node, prime)) % MOD;
        }

        dp[node][prime] = ways;
        result = (result + ways) % MOD;
    }

    return result;
}

int main() {
    int n;
    std::cin >> n;

    // Read the tree
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        std::cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    generatePrimes();
    memset(dp, -1, sizeof(dp));

    long long ans = dfs(1, 0, -1);
    std::cout << ans << std::endl;

    return 0;
}