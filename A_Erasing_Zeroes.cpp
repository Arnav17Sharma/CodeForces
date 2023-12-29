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
    int t;cin >> t;
    while(t--){
        int i, cnt = 0, h = 0, li, fi;
        string s;
        cin >> s;
        for(i=0; i<s.length(); i++){
            if(s[i]=='1' && cnt==0){fi=i;}
            if(s[i]=='1'){cnt++;li = i;}
        }
        int temp = cnt;
        while(li!=fi){
            if(s[li]=='0' && cnt<temp){h++;}
            else{cnt--;}
            li--;
        }
        cout << h << endl;
    }
}


int32_t main()
{
fastio()
answertoProb();
return 0;
}