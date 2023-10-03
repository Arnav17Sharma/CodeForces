#include<iostream>
using namespace std;
int main(){
    int n, p, m, count=0, max=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m>>p;
        count += (p-m);
        if(count>max){max=count;}
    }
    cout<<max<<endl;
}