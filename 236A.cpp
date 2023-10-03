#include<iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    map<string, int>d;
    for(int i=0; i<a.length(); i++){
        if (d.find(a[i]) != d.end()) {
            d[a[i]] = 1;
        }
        else{d[a[i]]++;}
    }
    if(d.size() % 2 == 0){
        cout << "CHAT WITH HER!"<<endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
}


// wjmzbmr
// CHAT WITH HER!
