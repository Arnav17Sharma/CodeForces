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
    int t;cin >> t;
    while(t--)
    {int n, r; cin >> n;
    ll s = 0;
    ll o = 0, e = 0;
    for(int i = 0; i < n; ++i) {
        int c;cin >> c;
        s += c;
        if(c%2){o++;}
        else{e++;}
        r = o / 3;
        if(e == 0 && o == 1) r = 0;
        else if(o % 3 == 1) r = (o + 2) / 3;
        cout << s - r << " ";
    }
    cout << "\n";}
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}