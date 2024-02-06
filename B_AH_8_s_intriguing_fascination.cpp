#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long g = 9, counter = 0, k = 10;
        while(n>g){
            counter += 9;
            g *= 10;
            k *= 10;
            g += 9;
        }
        if(n>9){k /= 10;counter += (n/k);}
        else{counter = n;}
        cout << counter << endl;
    }
    return 0;
}