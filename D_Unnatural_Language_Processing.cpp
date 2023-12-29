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
        int n, pv = 0;
        string s = "", g = "";
        char c, prev = 'N';
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> c;
            s+=c;
        }g+=s[0];
        for(int i=1; i<n-1; i++){
            if((s[i]!='a'&&s[i]!='e') && (s[i-1]=='a'||s[i-1]=='e') && (s[i+1]=='a'||s[i+1]=='e')){g+='.';g+=s[i];}
            else if((s[i]!='a'&&s[i]!='e') && (s[i-1]=='a'||s[i-1]=='e') && (s[i+1]!='a'&&s[i+1]!='e')){g+=s[i];g+='.';}
            else{g+=s[i];}
        }g+=s[n-1];
        cout << g << endl;
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}