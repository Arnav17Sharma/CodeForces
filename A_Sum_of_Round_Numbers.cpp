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
        int n, h=0, i = 1;
        vi b;
        cin >> n;
        while(n!=0){
            int digit = n%10;
            if(digit!=0){h++;b.push_back(digit*i);}
            i*=10;
            n/=10;
        }
        cout << b.size() << endl;
        for(int k=0; k<b.size(); k++){
            cout << b[k] << " ";
        }cout << endl;
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}