#include<bits/stdc++.h>

using namespace std;

long long minn() {
    int n;
    cin >> n;
    
    vector<vector<int>> a(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            long long cnt = 0;
            for(int k = 0; k + i < n && k + j < n; k++) {
                int now = a[i+k][j+k];
                int find = max(0, -now);
                cnt = max(cnt, (long long)find);
            }
            if(cnt > 0) {
                ans += cnt;
                for(int k = 0; k + i < n && k + j < n; k++) {
                    a[i+k][j+k] += cnt;
                }
            }
        }
    }
    
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cout << minn() << "\n";
    }
    return 0;
}