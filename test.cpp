#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<n/2; i++){
        if(n%i==0){return false;}
    }return true;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a>=1 && b>=1 && a%b==0){cout << 0 << endl;}
        // else{
        //     int sum = a + b;
        //     if(isPrime(sum)){cout << b-1 << endl;}
        //     else{
        //     int max = a>b? a : b;
        //     int min = INT_MAX;
        //     int diff;
        //     int l = sum-1;
        //     while(l!=0){
        //         if(sum%l==0){
        //             int other = sum-l;
        //             if(other>=l){diff=abs(max-other);}
        //             else{int diff = abs(max - l);}
        //             cout << diff << " ";
        //             if(diff < min){min = diff;}
        //         }
        //         l--;
        //     }
        //     cout << endl;
        //     cout << min << endl;}
        // }
        else{
            int sum = a+b;
            if(isPrime(sum)){cout << b-1 << endl;}
            else{
            int a1=a, b1=b, count1=0, count2 = 0;
            while(a1%b1!=0 && a1>1 && b1>1){
                a1++;
                b1--;
                count1++;
            }
            a1=a, b1=b;
            while(a1%b1!=0 && a1>1 && b1>1){
                a1--;
                b1++;
                count2++;
            }
            if(count2>count1){cout << count1 << endl;}
            else{cout << count2 << endl;}}
        }
    }
	return 0;
}
