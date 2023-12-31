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
    int t; cin >> t;
    while(t--){
        bool l = false, r=false;
        int n, h=0;cin>>n;
        string s;cin >> s;
        for(char x: s){
            if(x=='L'){l=true;}
            else{r=true;}
        }
        if(!l || !r){cout << -1 << endl;}
        else{
            for(int i=0; i<n && !h; i++){
                if(s[i]=='R' && s[i+1]=='L'){cout << 0 << endl;h=1;}
            }
            for(int i=0; i<n && !h; i++){
                if(s[i]=='L' && s[i+1]=='R'){cout << i+1 << endl;}
            }
        }
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}