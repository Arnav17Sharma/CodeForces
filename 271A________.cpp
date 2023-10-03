#include<iostream>
using namespace std;
int main(){
    int n, found=0, arr[4]={};
    cin>>n;
    n2=n;
    while(!found){
        for (int i=0; i<4; i++){
            arr[i] = n1%10;
            n1/=10;
        }
        int j;
        int array1 = arr;
        for (j=0; j<i; j++)
            if (array1[i] == array1[j])
                break;
        if (i == j)
            cout << array1[i] << " ";
    }
}