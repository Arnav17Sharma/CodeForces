#include <iostream>
#include <vector>

using namespace std;

int findPile(vector<int>& total, int worm) {
    int left = 0;
    int right = total.size() - 1;
    while (left < right) {
        int mid = (left + right) / 2;
        if (worm <= total[mid]) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left + 1;
}

int main() {
    int n;
    cin >> n;
    vector<int> worms_list(n);
    vector<int> total(n);
    for (int i = 0; i < n; ++i) {
        cin >> worms_list[i];
        if (i == 0) {
            total[i] = worms_list[i];
        } else {
            total[i] = total[i - 1] + worms_list[i];
        }
    }
    int m;
    cin >> m;
    vector<int> juicy(m);
    for (int i = 0; i < m; ++i) {
        cin >> juicy[i];
    }
    for (int i = 0; i < m; ++i) {
        cout << findPile(total, juicy[i]) << endl;
    }
    return 0;
}