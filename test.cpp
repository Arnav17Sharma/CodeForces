#include<bits/stdc++.h>
using namespace std;
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> ans;
            int i=0, j=0, k=0;
            while(j<n2 && i<n1){
                if(A[i] < B[j]){
                    i++;
                }
                else if(A[i] > B[j]){
                    j++;
                }
                else{
                    if(A[i] == C[k]){ans.push_back(A[i]);i++;j++;k++;}
                    else if(k == n3-1){
                        i++;
                        j++;
                        k = 0;
                    }
                    else{k++;}
                }
            }
        return ans;
        }
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        vector <int> res = commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
    return 0;
}
