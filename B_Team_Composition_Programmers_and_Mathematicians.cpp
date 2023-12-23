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
        int b, c, min1, min2, ans;
        cin >> b >> c;
        if(b>c){min1 = c;}else{min1 = b;}
        min2 = (b+c)/4;
        if(min1>min2){ans = min2;}else{ans = min1;}
        cout << ans << endl; 
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}