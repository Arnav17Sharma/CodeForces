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
        string move;
        cin >> move;
        char col = move[0];
        char row = move[1];
        vector<char> cols = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
        vector<char> rows = {'1', '2', '3', '4', '5', '6', '7', '8'};
        for(int i=0; i<8; i++){
            if(cols[i]!=col){
                string temp = move;
                move[0] = cols[i];
                cout << move << endl;
                move = temp;
            }
        }
        for(int i=0; i<8; i++){
            if(rows[i]!=row){
                string temp = move;
                move[1] = rows[i];
                cout << move << endl;
                move = temp;
            }
        }
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}