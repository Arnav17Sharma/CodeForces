#include <bits/stdc++.h>
using namespace std;

//Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//Macros
#define f(i,j) for(int i=0;i<j;i++)
#define rf(i,j) for(int i=j-1;i>=0;i--)
#define all(x) x.begin(), x.end()

//Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;

void answertoProb()
{
    ll t;
    cin >> t;
    while(t--){
        ll a, b, c, div = 0;
        cin >> a >> b >> c;
        ll min = a;
        if(a==b && b==c){cout << "YES" << endl;}
        else{
        ll sum = a + b + c;
        if(a<=b && a<=c){
            min = a;
            if(b%a==0 && c%a==0){div=1;}
        }
        else if(b<=a && b<=c){
            min = b;
            if(a%b==0 && c%b==0){div=1;}
        }
        else{
            min = c;
            if(b%c==0 && a%c==0){div=1;}
        }
        // cout << min << endl;
        if(min*6 < sum){cout << "NO" << endl;}
        else if(min*6>=sum && div!=1){cout << "NO" << endl;}
        else{
            if(sum%6!=0 && sum%5!=0 && sum%4!=0){cout << "NO" << endl;}
            else{cout << "YES" << endl;}
        }}
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}