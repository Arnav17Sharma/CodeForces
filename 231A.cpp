#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int q1,q2,q3,s=0,a=0;
    for(int i=0; i<n; i++){
        cin>>q1>>q2>>q3;
        s=q1+q2+q3;
        if(s>=2){
            a+=1;
        }
        s=0;
    }
    cout<<a<<endl;
}