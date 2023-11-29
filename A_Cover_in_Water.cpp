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
        int n;
        cin >> n;
        char s;
        vector<int> v;
        int count = 0;
        for(int i=0; i<n; i++){
            cin >> s;
            if(s=='.'){
                count++;
            }
            else if(s=='#' && count != 0){
                v.push_back(count);
                count = 0;
            }
            else if(i==n-1 && count != 0){
                v.push_back(count+1);
                count = 0;
            }
        }
        if(count){v.push_back(count);}
        int ans = 0, dans = 0;
        if(v.size() == 0){cout << 0 << endl;}
        else{
        for(int i=0; i<v.size(); i++){
            if(v[i]>=3){dans = 2;}
            if(v[i] >= 2){ans += 2;}
            else{ans += 1;}
        }
        if(dans){cout << 2 << endl;}
        else{cout << ans << endl;}}
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}