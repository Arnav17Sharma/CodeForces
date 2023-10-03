#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a = 1, b = 3, c = 4, count = 2;
        cout << a << " " << b << " ";
        while(count!=n) {
            if ((3*c)%(a+b)!=0){
                count++;
                a = b;
                b = c;
                cout << c << " ";
            }
            c++;
        }
        cout << "\n";
    }
    return 0;
}