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
        int n;cin>>n;
        if(n==3 || n==1){cout << "NO\n";}
        else if(n&1^1){
            int k=1;
            cout << "YES\n";
            for(int i=0; i<n; i++){cout << k << " ";k*=-1;}
            cout << endl;
        }
        else{
            cout <<"YES\n";
            for(int i=0; i<n; i+=2){
                cout << 3-n << " ";
                if(i!=n-1){cout << n-1 << " ";}
            }
            cout << endl;
        }
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}