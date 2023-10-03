#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, m, g;
    cin >> n;
    for(int a=0; a<n; a++){
        long long min, p = 1, c=0;
        cin >> m;
        cin >> g;
        if(g!=0){
            min = g;
            p*=g;
        }
        else{
            c++;
        }
        for(int b=0; b<m-1; b++){
            cin >> g;
            if(g!=0){
                p *= g;
                if(g < min){min = g;}
            }
            else{c++;}
        }
        if(c==0){
            p /= min;
            p *= (min + 1);
            cout << p << endl;
        }
        else if(c==1){
            cout << p << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}