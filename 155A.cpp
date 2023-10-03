#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin >> n;
    cin>>b;
    int highest=b, lowest=b,ans=0;
    if(n==1){cout<<0<<endl;}
    else{
    for(int i=0; i<n-1; i++){
        cin >> a;
        if(a>highest){
            highest = a;
            ans++;
        }
        else if(a<lowest){
            lowest = a;
            ans++;
        }
        else{
            continue;
        }
    }
    cout << ans << endl;
    }
}