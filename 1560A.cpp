#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    for(int b=0; b<n; b++){
        cin >> m;
        long long a = 0, count = 0;
        while(count != m){
            a++;
            if(a%3!=0 and a%10!=3){
                count++;
            }
        }
        cout << "answer : " << a << endl;
    }
}
