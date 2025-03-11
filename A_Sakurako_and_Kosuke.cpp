#include <iostream>
using namespace std;
void find_winner(int n) {
    int position = 0;
    int i = 1;
    while (true) {
        if (i % 2 != 0) {
            position -= (2 * i - 1);
        } else {
            position += (2 * i - 1);
        }
        if (position < -n || position > n) {
            if (i % 2 != 0) {
                cout << "Sakurako" << endl;
            } else {
                cout << "Kosuke" << endl;
            }
            break;
        }
        i++;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        find_winner(n);
    }
    return 0;
}
