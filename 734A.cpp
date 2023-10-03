#include<iostream>
#include<string>
using namespace std;
int main(){
    int n, a=0, d=0;
    string s, e;
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++){
        e = s[i];
        if(e=="A"){a++;}
        else{d++;}
    }
    if(a>d){cout<<"Anton"<<endl;}
    else if(a<d){cout<<"Danik"<<endl;}
    else{cout<<"Friendship"<<endl;}
}
