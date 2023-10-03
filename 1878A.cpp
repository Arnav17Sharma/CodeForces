#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, a;
    string ans = "NO";
    cin>>t;
    while(t--){
        cin >> n >> k;
        for(int i=0; i<n; i++){
            cin >> a;
            if(a==k){ans = "YES";}
        }
        cout << ans << endl;
        ans = "NO";
    }
    return 0;
}