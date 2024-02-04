#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n), b(n);
    vector<pair<long long, long long>> pairs;
    for(int i=0; i<n; i++){cin >> a[i];}
    for(int i=0; i<n; i++){cin >> b[i];}
    unordered_map<long long, long long> mp;
    for(int i=0; i<n; i++){
        mp[a[i]] = b[i];
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++){cout << a[i] << " ";}
    cout << endl;
    for(int i=0; i<n; i++){cout << mp[a[i]] << " ";}
    cout << endl;
}


int main()
{
    //Radhe Radhe
    //The comeback is always stronger than the setback
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}