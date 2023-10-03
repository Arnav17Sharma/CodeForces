#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    for(int l=0; l<n; l++){
        cin >> m;
        char b, c='y';
        vector<long long> v(26, 0);
        cin >> b;
        char prev = b;
        v[prev-'A']++;
        for(int j=0; j<m-1; j++){
            cin >> b;
            if(prev != b ){
                if(v[b-'A']!=0){c='n';cout << "NO " << endl;}
                else{v[b-'A']++;}
            }
            else{
                v[prev-'A']++;
            }
            prev = b;
        }
        if(c=='y'){cout << "YES" << endl;}
    }
}