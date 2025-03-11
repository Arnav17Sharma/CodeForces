#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& graph, int u, int target, vector<int>& path, vector<vector<int>>& ans, vector<bool>& vis) {
    if (u == target) {
        ans.push_back(path);
        return;
    }

    for (auto x : graph[u]) {
        if (!vis[x]) {
            path.push_back(x);
            vis[x] = true;
            dfs(graph, x, target, path, ans, vis);
            path.pop_back();
            vis[x] = false;
        }
    }
}

int main() {
    vector<vector<int>> graph = {
        {1, 2, 4},
        {0},
        {0},
        {4},
        {3, 5, 0},
        {4}
    };
    
    int target = 5;
    vector<vector<int>> ans;
    vector<int> path = {0};
    vector<bool> vis(graph.size(), false);
    vis[0] = true;

    dfs(graph, 0, target, path, ans, vis);
    for (auto& x : ans) {
        for (auto& y : x) {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}