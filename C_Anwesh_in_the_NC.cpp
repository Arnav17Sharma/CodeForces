#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long x1, y1, x2, y2, t = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        if(y2 < y1){
            cout << -1 << endl;
        }else {
            t += (y2-y1);
            x1 += (y2-y1);
            t += (x1-x2);
            x1 -= x2;
            if(x1<0)
                cout << -1 << endl;
            else
                cout << t << endl;
        }
    }
    return 0;
}