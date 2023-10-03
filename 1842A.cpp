#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,a,b;
    cin >> a;
    for(int j=0; j<a; j++){
        long long s1=0, s2=0;
        cin >> n >> m;
        for(int i=0; i<n; i++){
            cin >> b;
            s1+=b;
        }
        for(int i=0; i<m; i++){
            cin >> b;
            s2+=b;
        }
        if(s1>s2){cout << "Tsondu" << endl;}
        else if(s1<s2){cout << "Tenzing" << endl;}
        else{cout << "Draw" << endl;}
    }
    return 0;
}