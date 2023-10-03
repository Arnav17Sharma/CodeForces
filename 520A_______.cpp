#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    vector<bool> mark(26, false);
    string s;
    cin >> n;
    cin >> s;
    if(n>=26){cout << "NO";}
    else{
        for(int i=0; i<s.length(); i++){
            if(s[i]>="A" && s[i]<="Z"){index=s[i]-"A";}
            else if(s[i]>="a" && s[i]<="z"){index=s[i]-"a";}
            else{continue;}
            mark[index]=true;
        }
        

    }
}