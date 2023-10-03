#include<iostream>
#include <string>
using namespace std;
int main(){
    int n,s1=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s[1]=='+'){
            s1+=1;
        }
        else{
            s1-=1;
        }
    }
    cout<<s1<<endl;
}