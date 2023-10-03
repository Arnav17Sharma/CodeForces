#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, n, w, g;
    cin >> a;
    for(int b=0; b<a; b++){
        cin >> n >> w;
        vector<int> v(n,0);
        cin >> g;
        v[0] = g;
        long long min = g;
        for(int i=1; i<n;i++){
            cin >> g;
            if(g < min){min = g;}
            v[i] = g;
        }
        long long h = min+1;
        while(w!=0){
            long long c = 0;
            for(int j=0; j<n; j++){
                if(v[j] < h){c++;}
            }
            if(c<=w){
                w-=c;
                h++;
            }
            else{
                w = 0;
            }
        }
        cout << h-1 << endl;
    }
}