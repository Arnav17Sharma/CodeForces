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
    for(char c: s){
        if(find(v.begin(), v.end(), c) == v.end()){
            v.push_back(c);
        }
    }
    if(v.size()%2==0){cout << "CHAT WITH HER!";}
    else{cout << "IGNORE HIM!";}
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}