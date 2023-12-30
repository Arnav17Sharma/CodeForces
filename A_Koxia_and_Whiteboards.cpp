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
        ll x, y, s = 0;
        cin >> x >> y;
        vector<int> v(x, 0); vector<int> n(y, 0);
        for(int i=0; i<x; i++){
            int b;
            cin >> b;
            v[i] = b;
        }
        for(int j=0; j<y; j++){
            int h;
            cin >> h;
            n[j] = h;
        }
        v.insert(v.end(), n.begin(), n.end());
        sort(v.begin(), v.end()-1);reverse(all(v));
        for(int i=0; i<x; i++){s+=v[i];}
        cout << s << endl;
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}