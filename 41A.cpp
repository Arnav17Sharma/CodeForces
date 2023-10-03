#include<iostream>
using namespace std;
int main(){
    string c1, c2, d = "";
    cin>>c1;
    for(int i=0; i<c1.length(); i++){
        d = c1[i] + d;
    }
    cin>>c2;
    if(c2 == d){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
}