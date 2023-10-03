#include<iostream>
#include<string>
using namespace std;
int main(){
    string ans = "";
    string n, m;
    cin>>n;
    cin>>m;
    for(int i=0; i<n.length(); i++){
        if(n[i] != m[i]){ans += "1";}
        else{ans+="0";}
    }
    cout << ans << endl;
    return 0;
}