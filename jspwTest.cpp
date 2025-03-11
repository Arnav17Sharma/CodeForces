#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;

        double v_min = 0.0;
        double v_max = 1e9;

        for (int i = 1; i <= N; ++i) {
            int A, B;
            cin >> A >> B;
            v_min = max(v_min, i * 1.0 / B);
            v_max = min(v_max, i * 1.0 / A);
        }
        if (v_min > v_max) {
            cout << "Case #" << t << ": -1\n";
        } else {
            cout << "Case #" << t << ": " << fixed << setprecision(6) << v_min << "\n";
        }
    }

    return 0;
}
