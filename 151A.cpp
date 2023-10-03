#include<iostream>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int t = k*l,slices=c*d;
    int drinks = t/nl,salt = p/np;
    int num = (drinks>salt) ? salt : drinks;
    int num2 = (num>slices) ? slices : num;
    cout << num2/n << endl;

}