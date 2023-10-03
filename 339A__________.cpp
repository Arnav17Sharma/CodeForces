#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int arr={}, a=0;
    int l = s.length();
    for(int i=0;i<l;i=i+2){
        arr[a] = s[i];
        a++;
    }
    
}