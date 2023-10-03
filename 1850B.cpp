#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int m, value, q, max, c=1, ans;
        cin >> m;
        cin >> value >> q;
        m = m - 1;
        if(value<=10){max = q;ans=1;}
        else{max = -1*q;}
        while(m!=0){
            c++;
            cin >> value >> q;
            if(value<=10 && q>max){max=q;ans=c;}
            m--;
        }
        cout << ans << endl;
    }
    return 0;
}