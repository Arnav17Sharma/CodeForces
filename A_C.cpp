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
        int x, y, z, c = 0;
        cin >> x >> y >> z;
        while(x<=z && y<=z){
            if(x>y){
                y += x;
            }else{x += y;}
            c++;
        }
        cout << c << endl;
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}