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
    string s, g = "";
    cin >> s;
    vi v = {97, 65, 101, 69, 105, 73, 111, 79, 117, 85, 121, 89};
    for(char c: s){
        if(find(all(v), int(c)) == v.end()){
            g+='.';
            if(c>'A' &&c<='Z'){g+=char(int(c)+32);}
            else{g+=c;}
        }
    }
    cout << g;
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}