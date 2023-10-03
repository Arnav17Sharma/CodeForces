#include<iostream>
using namespace std;

int main(){
    int n,k,a,b,s=0;
    cin>>n>>k;
    int arr[n]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==k-1){
            b=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=b && arr[i]>0){
            s+=1;
        }
    }
    cout<<s<<endl;
}