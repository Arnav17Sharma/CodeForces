#include<iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    int upper=0;
    int lower=0;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        int d = int(s[i]);
        if(d>=65 && d<=90){upper++;}
        else{lower++;}
    }
    if(upper>lower){transform(s.begin(), s.end(), s.begin(), ::toupper);}
    else{transform(s.begin(), s.end(), s.begin(), ::tolower);}
    cout<<s<<endl;
}