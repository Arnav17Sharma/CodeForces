#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int a,b;
        cin >> a >> b;
        cout << (b-a%b)%b << endl;
    }
    return 0;
}