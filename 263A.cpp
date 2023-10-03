#include<iostream>
using namespace std;
int main(){
    int arr[5][5],a,b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                a=i;
                b=j;
            }
        }
    }
    if(a>=2 && b>=2){
        cout<<((a-2)+(b-2))<<endl;
    }
    else if(a>=2 && b<2){
        cout<<((a-2)+(2-b))<<endl;
    }
    else if(a<2 && b>=2){
        cout<<((2-a)+(b-2))<<endl;
    }
    else{
        cout<<((2-a)+(2-b))<<endl;
    }
}