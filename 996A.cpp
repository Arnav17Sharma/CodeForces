#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d, c = 0;
    cin >> n;
    while(n!=0){
        if(n>=100){
            d = 100;
        }
        else if(n>=20){
            d = 20;
        }
        else if(n>=10){
            d = 10;
        }
        else if(n>=10){
            d = 10;
        }
        else if(n>=5){
            d = 5;
        }
        else if(n>=1){
            d = 1;
        }
        n -= d;
        c += 1;
    }
    cout << c;
    return 0;
}