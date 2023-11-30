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
    int t;
    cin >> t;
    while(t--){
        string ans = "YES";
        int n, a;
        string s;
        cin >> n;
        map<int, vector<int>> r;
        vi v;
        f(i, n){cin >> a;r[a].push_back(i);}
        cin >> s;
        for(auto i: r){
            vector<int> l = i.second;
            char c = s[l[0]];
            f(j, l.size()){
                if(s[l[j]] != c){ans = "NO";}
            }
        }
        cout << ans << endl;
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}