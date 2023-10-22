#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, diff, ans;
    string pin;
    cin >> n;
    while(n--){
        int ans = 0;
        cin >> pin;
        char curr = '1';
        map<char, int> mor;
        mor['1'] = 1;
        mor['2'] = 2;
        mor['3'] = 3;
        mor['4'] = 4;
        mor['5'] = 5;
        mor['6'] = 6;
        mor['7'] = 7;
        mor['8'] = 8;
        mor['9'] = 9;
        mor['0'] = 10;
        for(int i=0; i<pin.length(); i++){
            char tar = pin[i];
            if(mor[tar]>mor[curr]){diff = mor[tar] - mor[curr];}
            else{diff = mor[curr] - mor[tar];}
            ans += diff+1;
            curr = tar;
        }
        cout << ans << endl;
    }
}