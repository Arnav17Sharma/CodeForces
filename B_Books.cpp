#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n, s;
    cin >> n >> s;
    vector<long long> a(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }
    long long ans = 0, curr = 0, l = 0;
    for (long long r = 0; r < n; ++r) {
        curr += a[r];
        while (curr > s) {
            curr -= a[l];
            l++;
        }
        ans = max((r - l + 1), ans);
    }
    cout << ans << endl;
    return 0;
}