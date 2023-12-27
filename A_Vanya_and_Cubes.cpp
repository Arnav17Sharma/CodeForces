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
    int n, u = 1;
    cin >> n;
    int s = 0;
    while(s<n){
        s += (u*(u+1)/2);
        u++;
    }
    if(s==n){cout << u-1;}
    else{cout << u-2;}
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}