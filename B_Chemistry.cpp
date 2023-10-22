#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;
    while(t--){
        char c;
        vector<int> v(26, 0);
        map<string, int> m;
        m["even"] = 0;
        m["odd"] = 0;
        cin >> n >> k;
        for(int i=0; i<n; i++){
            cin >> c;
            v[c-97]++;
        }
        for(int i=0; i<v.size(); i++){
            if(v[i]%2!=0){m["odd"]++;}
        }
        if(m["odd"]-k>=2){cout << "NO" << endl;}
        else{cout << "YES" << endl;}
    }
}