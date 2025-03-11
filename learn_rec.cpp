#include<bits/stdc++.h>
using namespace std;

int main() {
    // Recursion example
    void helper(int ind, vector<int> &arr, vector<int>& temp, vector<vector<int>> &arr) {
        if (ind == n) {
            ans.push_back(temp);
            return;
        }

        temp.push_back(arr[ind]);
        helper(ind + 1, arr, temp, ans);

        temp.pop_back();
        helper(ind + 1, arr, temp, ans);
    }


    vector<vector<int>> subsets(vector<int> arr) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(0, arr, temp, ans);
        return ans;
    }
    return 0;
}