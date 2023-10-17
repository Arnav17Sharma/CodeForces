#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, index, ans = 0;
    vector<int> mark(26, 0);
    char c;
    string s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> c;
        s += c;
    }
    if(n<26){cout << "NO";ans = 1;}
    else{
        for(int i=0; i<n; i++){
            if(s[i]>='A' && s[i]<='Z'){index=s[i]-'A';}
            else if(s[i]>='a' && s[i]<='z'){index=s[i]-'a';}
            mark[index]++;
        }
    }
    if(!ans){
        for(int i=0; i<26; i++){if(mark[i] == 0){cout << "NO";ans=1;break;}}
    }
    if(!ans){cout << "YES";}
}