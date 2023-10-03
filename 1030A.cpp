#include<iostream>
using namespace std;
int main(){
    int n,b,a=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>b;
        if(b==0){a++;}
        else{break;}
    }
    if(a==n){cout<<"EASY";}
    else{cout<<"HARD";}
}