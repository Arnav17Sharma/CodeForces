#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d = n/5 + ((n%5!=0) ? 1 : 0);
    cout << d << endl;
}