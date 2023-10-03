#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int g=0; g<n;g++){
        char c;
        int ans = 0;
        for(int i=1; i<11; i++){
            for(int j=1; j<11; j++){
                cin >> c;
                if(c == 'X'){
                    int x =(i>5)? x=11-i: i;
                    int y =(j>5)? y=11-j: j;
                    int pt = (x>=y)? y:x;
                    ans += pt;
                }
            }
        }
        cout << ans << endl;
    }
}