#include<iostream>
using namespace std;
int main(){
    long long n,s=0;
    cin>>n;
    long long a = n/2;
    if(n%2!=0){cout<<(a+(-1*n));}
    else{cout<<a;}
}