#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,n,m,k;
    cin >> a;
    for(int i=0; i<a; i++){
        cin >> n >> m >> k;
        if (k == (m-1) + (n-1)*m){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}