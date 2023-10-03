#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        int l = s.length();
        int ascii = 96 + l;
        while(ascii != 96){
            if(char(ascii) == s[0]){
                s = s.substr(1,l);
            }
            else if(char(ascii) == s[l-1]){
                s = s.substr(0,l-1);
            }
            else{
                cout << "NO" << endl;
                break;
            }
            l = s.length();
            ascii--;
        }
        if(ascii == 96){cout << "YES" << endl;}
    }
    return 0;
}