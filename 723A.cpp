#include<iostream>
using namespace std;
int main(){
    int a,b,c,n,d;
    cin >> n;
    b = c = n;
    for(int i=0; i<2; i++){
        cin >> a;
        if(a>b){b = a;}
        else if(a<c){c = a;}
        else{d=a;}
    }
    int ans = (b-d) + (d-c);
    cout << ans << endl;
}