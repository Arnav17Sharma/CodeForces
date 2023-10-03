#include<iostream>
using namespace std;
int main(){
    int a,b,c=0,d;
    cin >> a >> b;
    d =a;
    while(c!=b){
        c = a%10;
        a+=d;
    }
    cout << a/d - 1 << endl;
    return 0;
}