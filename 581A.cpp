#include<iostream>
using namespace std;
int main(){
    int a,b,a1,a2;
    cin>>a>>b;
    if(a>b){a1=b;a2=(a-b)/2;}
    else{a1=a;a2=(b-a)/2;}
    cout << a1 << " " << a2 << endl;
    return 0;
}