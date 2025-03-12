#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<double> ropes;

bool isValid(double length) {
    int count = 0;
    for (double rope : ropes) {
        count += (int)(rope / length);
    }
    return count >= k;
}

double findMaxLength() {
    double low = 0.0, high = *max_element(ropes.begin(), ropes.end());
    double mid;
    while (high - low > 1e-7) {
        mid = (low + high) / 2;
        if (isValid(mid))
            low = mid;
        else
            high = mid;
    }
    return low;
}

int main() {
    cin >> n >> k;
    ropes.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> ropes[i];
    }

    cout << fixed << setprecision(6) << findMaxLength() << endl;
    return 0;
}