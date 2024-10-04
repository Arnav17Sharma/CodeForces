#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, ans = 0, temp;
    cin >> N;
    for(int i=0; i<N;i++) {
        cin >> temp;
        if(temp < 0)
            ans++;
    }

    cout << ans;

    return 0;
}
