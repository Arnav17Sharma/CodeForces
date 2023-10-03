#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t, n, k, x;
    cin >> t;
    while(t--){
        cin >> n >> k >> x;
        if(k==x && n!=1){
            cout << "NO" << endl;
            continue;
        }
        long long s1 = n*(n+1)/2;
        n = n-k;
        long long s2 = n*(n+1)/2;
        long long s3 = k*(k+1)/2;
        if(s3>x){cout << "NO" << endl;}
        else if(s1-s2>=x){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}