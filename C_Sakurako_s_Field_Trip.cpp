#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cnt(const vector<int>& arr) {
    int count = 0;
    for(int i = 0; i < (int)arr.size() - 1; i++) {
        if(arr[i] == arr[i + 1]) count++;
    }
    return count;
}

int solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = cnt(a);
    for(int i = 1; i <= n/2; i++) {
        vector<int> temp = a;
        swap(temp[i-1], temp[n-i]);
        ans = min(ans, cnt(temp));
        if(i > 1) {
            swap(temp[0], temp[n-1]);
            ans = min(ans, cnt(temp));
            swap(temp[0], temp[n-1]);
        }
        if(i < n/2) {
            swap(temp[n/2-1], temp[n-n/2]);
            ans = min(ans, cnt(temp));
        }
    }
    
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << "\n";
    }
    return 0;
}