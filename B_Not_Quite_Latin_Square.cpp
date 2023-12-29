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
    char c;
    cin >> t;
    while(t--){
        map<char, int> d;
        d['A'] = 0;
        d['B'] = 0;
        d['C'] = 0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin >> c;
                if(c!='?'){d[c]++;}
            }
        }
        if(d['A']==2){cout << 'A' << endl;}
    else if(d['B'] == 2){cout << 'B' << endl;}
    else{cout << 'C' << endl;}
    }
    
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}