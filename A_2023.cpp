#include <bits/stdc++.h>
using namespace std;

//Speed
// #define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//Macros
// #define f(i,j) for(int i=0;i<j;i++)
// #define rf(i,j) for(int i=j-1;i>=0;i--)
// #define all(x) x.begin(), x.end()

//Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef map<int,int> mii;

void answertoProb()
{
    ll t;cin >> t;
    while(t--){
        ll n, k, b, p = 1;
        cin >> n >> k;
        for(int i=0; i<n; i++){
            cin >> b;
            p*=b;
        }
        vi v = {7, 17, 17}, h;
        if(2023%p){cout << "NO" << endl;}
        else{
            cout << "YES" << endl;
            ll d = 2023/p;
            cout << d << " ";
            for(int i=0; i<k-1; i++){cout << 1 << " ";}
            cout << endl;
        }
    }
}


int32_t main()
{
// fastio()
answertoProb();
return 0;
}