#include<bits/stdc++.h>

using namespace std;

int solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<long long> presum(n + 1, 0);
    for(int i = 0; i < n; i++) {
        presum[i + 1] = presum[i] + a[i];
    }
    vector<int> dp(n + 1, 0);
    unordered_map<long long, int> last;

    last[0] = 0;
    for(int i = 1; i <= n; i++) {
        dp[i] = dp[i-1];
        if(last.count(presum[i])) {
            int prev_pos = last[presum[i]];
            dp[i] = max(dp[i], 1 + dp[prev_pos]);
        }
        last[presum[i]] = i;
    }
    
    return dp[n];
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << "\n";
    }
    
    return 0;
}