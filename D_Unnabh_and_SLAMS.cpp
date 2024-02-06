#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long h = 0;
        for(int i=0; i<5; i++){
            char c;
            for(int j=0; j<5; j++){
                cin >> c;
                if(c=='X')
                    h += min(i+1, j+1);
            }
            for(int j=4; j>=0; j--){
                cin >> c;
                if(c == 'X')
                    h += min(i+1, j+1);
            }
        }
        for(int i=4; i>=0; i--){
            char c;
            for(int j=0; j<5; j++){
                cin >> c;
                if(c=='X')
                    h += min(i+1, j+1);
            }
            for(int j=4; j>=0; j--){
                cin >> c;
                if(c == 'X')
                    h += min(i+1, j+1);
            }
        }
        cout << h << endl;
    }
}