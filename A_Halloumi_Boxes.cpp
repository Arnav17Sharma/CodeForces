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
    while(t--) {
        long long n, k, s = 0;
        cin >> n >> k;
        vector<int> l(n);
        for(int i=0; i<n; i++) {
            cin >> l[i];
            s += l[i];
        }
        if(k==1 && !is_sorted(l.begin(), l.end())) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}