#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}


ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

void solve() {
    ll l, r;
    cin >> l >> r;

    if(l==r && (isPrime(l) || l==1)){
        cout<<1<<endl;
        return;
    }
    
    vector<pair<ll, ll>> coprime_segments;

    for(ll i = l; i <= r; i++) {
        for(ll j = i + 1; j <= min(r, i + 10); j++) {
            if(gcd(i, j) == 1) {
                bool is_minimal = true;
                for(ll k = i + 1; k < j && is_minimal; k++) {
                    if(gcd(i, k) == 1 || gcd(k, j) == 1) {
                        is_minimal = false;
                    }
                }
                if(is_minimal) {
                    coprime_segments.push_back({i, j});
                }
            }
        }
        for(ll diff : {12, 14, 15, 16, 18, 20}) {
            ll j = i + diff;
            if(j > r) break;
            if(gcd(i, j) == 1) {
                bool is_minimal = true;
                for(ll k = i + 1; k < j && is_minimal; k++) {
                    if(gcd(i, k) == 1 || gcd(k, j) == 1) {
                        is_minimal = false;
                    }
                }
                if(is_minimal) {
                    coprime_segments.push_back({i, j});
                }
            }
        }
    }
    
    cout << coprime_segments.size() << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}