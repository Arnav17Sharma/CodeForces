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
    string s1, s2;
    cin >> s1;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cin >> s2;
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    if(s1>s2){cout << 1;}
    else if(s1<s2){cout << -1;}
    else{cout << 0;}
}


int32_t main()
{
    fastio()
    answertoProb();
    return 0;
}