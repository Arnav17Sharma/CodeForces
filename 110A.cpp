#include<iostream>
using namespace std;
int main(){
    long long int n, g = 0, j=0, c=0;
    cin>>n;
    while(n!=0){
        int d = n%10;
        if(d==4 || d==7){j++;}
        n/=10;
    }
    if(j==0){c=1;}
    while(j!=0){
        int d = j%10;
        if(d!=4 && d!=7){g=1;break;}
        j/=10;
    }
    if(!g and !c){
        cout<<"YES";
    }
    else{
        cout<<"NO";}
    cout << endl;
}