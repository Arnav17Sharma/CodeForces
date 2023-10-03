#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        string s = "";
        char ch;
        for(int i=1; i<9; i++){
            for(int j=1; j<9; j++){
                cin >> ch;
                if(ch != '.'){
                    s += ch;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}