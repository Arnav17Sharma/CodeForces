#include<iostream>
using namespace std;
int main(){
    long long n,c,num, ans=0,ans2=0,c1=0,c2=0;
    cin >> n;
    num=n;
    if(n==9){cout << n << endl;}
    else{
    while(num!=0){
        int d = num % 10;
        if(num==9){c = d;}
        else if(d>=5){c=9-d;}
        else{c=d;}
        ans = ans*10 + c;
        num/=10;
        c1++;
    }
    while(ans!=0){
        int d = ans % 10;
        ans2 = ans2*10 + d;
        ans /= 10;
        c2++;
    }
    if(c1!=c2){
        for(int i=0; i<c1-c2; i++){
            ans2 *= 10;
        }
    }
    cout << ans2 << endl;
    }
    return 0;
}