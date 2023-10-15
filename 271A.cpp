#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans, n, found=0, k=10, i;
    cin>>n;
    ans = n;
    int n1 = n;
    while(found!=4){
        found = 0;
        vector<int> year(10, 0);
        ans++;
        n1 = ans;
        for(i=0; i<4; i++){
            year[n1%k]++;
            n1/=10;
        }
        for(i=0; i<10; i++){
            if(year[i]==1){found++;}
        }
    }
    cout << ans;
}