#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=1; i<=a; i++){
        int count=0;
        for(int j=1; j<=b; j++){
            if(i%2!=0){
                cout << "#";
            }
            else if(i%4==0){
                if(count==0){
                    cout<<"#";
                    count=1;
                }
                else if(count==1){
                    cout<<".";
                }
            }
            else{
                if(i%2==0 && count!=b-1){
                    cout<<".";
                    count++;
                }
                else if(i%2==0 && count==b-1){
                    cout<<"#";
                    count=0;
                }
            }
        }
        cout << endl;
    }
}