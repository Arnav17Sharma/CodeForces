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
        int n, k, l;
        bool ans = true;
        cin >> n >> k;
        vi l1(n, 0);
        vi l2(n, 0);
        for(int i = 0; i<n; i++){
            cin >> l;
            l1[i] = l;
            l2[i] = l;
        }
        sort(all(l1));
        int eq = 1;
        for(int i=0; i<n; i++){
            if(l1[i]!=l2[i]){eq = 0;}
        }
        if(eq){cout << "YES" << endl;}
        else{
        f(i,n){
            int diff = abs((find(all(l1), l2[i]) - l1.begin()) - i) + 1;
            if(diff > k && ans){cout << "NO" << endl;ans=false;}
        }
        if(ans){cout << "YES" << endl;}}
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}