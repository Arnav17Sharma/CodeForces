#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    for(int a=0; a<n; a++){
        cin >> s;
        if(s[0]=='a' || s[1]=='b' || s[2]=='c'){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}