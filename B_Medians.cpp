// #include <iostream>
// #include <vector>
// using namespace std;

// void solve() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         int m = (n / 2) + 1;
//         if (k > n || m < 1) {
//             cout << "-1\n";
//             continue;
//         }
//         cout << m << "\n";
//         for (int i = 0; i < m; i++) {
//             cout << (2 * i + 1) << " ";
//         }
//         cout << "\n";
//     }
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
    
//     solve();
    
//     return 0;
// }


#include <iostream>
#include <string>
#include <vector>

int calculateTotalEnergy(const std::string& S, int K) {
    int N = S.size();
    int totalEnergy = 0;

    // Calculate transition energy between each pair of stages
    for (int i = 0; i < N - K; ++i) {
        int energy = 0;
        // Compare elements in the overlapping sections between two consecutive stages
        for (int j = 1; j < K; ++j) {
            if (S[i + j] != S[i + j + 1]) {
                ++energy;
            }
        }
        totalEnergy += energy;
    }

    return totalEnergy;
}

int main() {
    std::string S;
    int K;
    
    std::cout << "Enter the design pattern string (S): ";
    std::cin >> S;
    std::cout << "Enter the number of sections (K): ";
    std::cin >> K;

    int totalEnergy = calculateTotalEnergy(S, K);
    std::cout << "Total energy required for transitioning: " << totalEnergy << std::endl;

    return 0;
}
