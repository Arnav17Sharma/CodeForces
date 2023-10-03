#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 18;
    string a = bitset<50>(n).to_string();
    reverse(a.begin(), a.end());
    for(int i =0; i<a.length(); i++){
        if(a[i] == '1'){return i+1}
    }
    return 0;
}