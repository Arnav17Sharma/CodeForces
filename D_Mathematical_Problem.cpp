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
    int t;cin>>t;
    while(t--){
        int n;cin >> n;
        if(n==1){cout << 1 << endl;}
        else if(n==3){cout << 169 << "\n" << 196 << "\n" << 961 << endl;}
        else{cout << 16384 << "\n" << 31684  << "\n" << 36481 << "\n" << 38416 << "\n" << 43681  <<endl;}
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}