#include<iostream>
using namespace std;
int main(){
    int n;
    string feeling="hate", ans="";
    cin >> n;
    for(int i=0; i<n-1; i++){
        if(feeling=="love" || i==0){feeling="hate";}
        else{feeling="love";}
        ans += "I " + feeling + " that ";
    }
    if(feeling=="love" || n==1){feeling="hate";}
    else{feeling="love";}
    string last = "I " + feeling + " it";
    ans += last;
    cout << ans << endl;
}