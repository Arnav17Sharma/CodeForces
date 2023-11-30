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
        ll n, q, op, val, eve;
        cin >> n >> q;
        vi ans(n, 0);
        f(i,n){cin >> ans[i];}
        f(i, q){
            ll sum = 0;
            cin >> op >> val;
            if(op == 0){f(j, n){if(ans[j]%2 == 0){ans[j] += val;}}}
            else{f(j, n){if(ans[j]%2 != 0){ans[j] += val;}}}
            f(j, n){sum+=ans[j];}
            cout << sum << endl;
        }
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}