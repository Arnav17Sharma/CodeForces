#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int pro = 1;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            pro *= a[i];
        }
        if(pro%k==0){cout << 0 << endl;}
        else{
            if(k==2){
                cout << 1 << endl;
            }
            else if(k==3 || k==5){
                int min = k - a[0]%k;
                for(int i=1; i<n; i++){
                    if(min>(k - a[i]%k)){min = k - a[i]%k;}
                }
                cout << min << endl;
            }
            else{
                if(pro%2==0){cout << 1 << endl;}
                else{
                    int min = 0;
                    for(int i=1; i<n; i++){
                        if(a[i]%4==3){min = 1;}
                    }
                    if(min){cout << 1 << endl;}
                    else{cout << 2 << endl;}
                }
            }
        }
    }
}