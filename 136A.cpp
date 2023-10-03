#include<iostream>
using namespace std;
int main(){
    int n,b;
    cin>>n;
    int arr[n]={};
    for(int i=1; i<=n; i++){
        cin>>b;
        arr[b-1]=i;
    }
    for(int j=0; j<n; j++){cout<<arr[j]<<" ";}
}