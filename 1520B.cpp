#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        int c=0;
        for(int j=1; j<=m; j++){
            int d = j%10;
            int g = j;
            while(d==g%10 && g!=0){
                d = g%10;
                g/=10;
            }
            if(!g){c++;}
        }
        cout << c << endl;
    }
    return 0;
}