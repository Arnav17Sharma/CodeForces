#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isValid(ll* arr, ll N, ll K, ll mid){
    ll divs = 1, curr = 0;
    for (int i = 0; i < N; i++) {
        curr += arr[i];
        if (curr > mid) {
            curr = arr[i];
            divs += 1;
        }
    }
    return divs <= K;
}

ll solve(ll* arr, ll N, ll K){
    ll low = *max_element(arr, arr + N),
    high = accumulate(arr, arr + N, 0LL);
    ll ans = 0;
    while (low <= high) {
        ll mid = (low + high) / 2;
        if (isValid(arr, N, K, mid)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    ll N, K;
    cin >> N;
    cin >> K;
    ll arr[N];
    for(int i=0; i<N; i++) {cin >> arr[i];}
    cout << solve(arr, N, K);
}