#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char a = s[0];
    if(int(a)>=65 and int(a)<=90){
        cout<<s<<endl;
    }else{
        int c = int(a);
        char b = char(c-32);
        cout<<b;
        for(int i=1;i<s.length();i++){
            cout<<s[i];
        }
        cout<<endl;
    }
}