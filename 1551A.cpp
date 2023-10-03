#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n, c1, c2;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> n;
        c1 = n/3;
        c2 = n/3;
        n %= 3;
        if(n==1){c1++;}
        if(n==2){c2++;}
        cout << c1 << " " << c2 << endl;
    }
}