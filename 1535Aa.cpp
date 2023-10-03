#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s1, s2, s3, s4;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s1 >> s2 >> s3 >> s4;
        int arr[4] = {s1, s2, s3, s4};
        int max = s1;
        int max2;
        for(int j =0; j<4; j++){
            if(arr[j] > max){max = arr[j];}}
        int min = max;
        for(int j =0; j<4; j++){
            int d = (max - arr[j]);
            if(d < min && d != 0){
                min = d;
                max2 = arr[j];
            }
        }
        int w1 = (s1 > s2) ? s1 : s2;
        int w2 = (s3 > s4) ? s3 : s4;
        if(w1 == max || w1 == max2){
            if (w2 == max || w2 == max2){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
}