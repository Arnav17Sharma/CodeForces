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
    string s;
    cin >> s;
    vector<char> v;
    for(int i=0; i<s.length(); i=i+2){
        v.push_back(s[i]);
    }
    sort(all(v));
    for(int i=0; i<v.size()-1; i++){
        cout << v[i] << "+";
    }cout << v[v.size()-1];
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}