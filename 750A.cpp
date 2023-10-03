#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int left = 240 - k;
    int t = 5*((n)*(n+1))/2;
    while(left<t){
        t -= (5*n);
        n--;
    }
    cout << n << endl;
    return 0;
}