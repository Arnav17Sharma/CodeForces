#include<iostream>
using namespace std;
int main(){
    int n, a, ans=0, crime=0, avail=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a==-1){
            crime++;
            if(crime > avail){
                ans++;
            }
            else{
                avail = avail - crime;
                crime--;
            }
        }
        else{
            crime = 0;
            avail+=a;
        }
    }
    cout << ans << endl;
    return 0;
}