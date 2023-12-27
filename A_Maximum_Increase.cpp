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
    ll t, h, c = 1, m = 1;
    cin >> t;
    vector<long long> v;
    for(int i=0; i<t; i++){
        cin >> h;
        v.push_back(h);
    }
    for(int i=1; i<t; i++){
        if(v[i] > v[i-1]){c++;}
        else{c = 1;if(c > m){m = c;}}
        if(c > m){m = c;}
    }
    cout << m;
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}