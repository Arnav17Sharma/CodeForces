#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,b;
    cin >> n;
    for(int i=0; i<n; i++){
        long long s = 0;
        cin >> m;
        for(int j=0; j<m; j++){
            cin >> b;
            s += b;
        }
        if(s/m==1 && s%m==0){
            cout << 0 << endl;
        } 
        else{
            if(s-m<0){
                cout << 1 << endl;
            }
            else{
                cout << s-m << endl;
            }
        }
    }
    return 0;
}