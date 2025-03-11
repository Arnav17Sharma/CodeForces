#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int s[2 * n];
    int off = 0, on = 0;

    for (int i = 0; i < 2 * n; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < 2 * n; i++) {
        if (s[i] == 0) {
            off++;
        } else {
            on++;
        }
    }

    if (off == 0) {
        cout << "0 0" << endl;
    } else {
        if (off >= on) {
            cout << (off % 2) << " " << on << endl;
        } else {
            cout << (on % 2) << " " << off << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
