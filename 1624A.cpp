#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m;
    for(int a = 0; a<m; a++){
        cin >> n;
        int max,min,p;
        cin >> p;
        max = p;
        min = p;
        for(int k =0; k<n-1; k++){
            cin >> p;
            if(p > max){max = p;}
            if(p < min){min = p;}
        }
        cout << max - min << endl;
    }
    return 0;
}