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

ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
void answertoProb()
{
    ll t;cin >> t;
    while(t--){
        ll x, y;
        cin >> x >> y;
        ll l = lcm(x,y), m = max(x,y), h= min(x,y);
        if(h==1){cout << m*m << endl;}
        else if(l==m){cout << m*m/h << endl;}
        else{cout << l << endl;}
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}