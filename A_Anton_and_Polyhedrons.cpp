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
    map<string, int> d;
    d["Tetrahedron"] = 4;
    d["Cube"] = 6;
    d["Octahedron"] = 8;
    d["Dodecahedron"] = 12;
    d["Icosahedron"] = 20;
    int t, h=0;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        h += d[s];
    }
    cout << h;
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}