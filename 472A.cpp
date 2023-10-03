#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n == 2){return true;}
    for(int i = 2; i<=n/2; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    
    for(int i=3; i<=n/2; i++){
        if(!isPrime(i) && !isPrime(n - i)){
            cout << i << " " << n-i;
            break;
        }
    }
}