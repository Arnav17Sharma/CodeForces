#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>& graph, int source, int target, vector<vector<int>>& ans) {
    queue<vector<int>> q;
    q.push({source});

    while (!q.empty()) {
        vector<int> path = q.front();
        q.pop();

        int lastNode = path.back();

        if (lastNode == target) {
            ans.push_back(path);
            continue;
        }

        for (auto neighbor : graph[lastNode]) {
            if (find(path.begin(), path.end(), neighbor) == path.end()) { 
                vector<int> newPath = path;
                newPath.push_back(neighbor);
                q.push(newPath);
            }
        }
    }
}

int main() {
    vector<vector<int>> graph = {
        {1, 2, 4},  // 0 -> 1, 2, 4
        {0},        // 1 -> 0
        {0},        // 2 -> 0
        {4},        // 3 -> 4
        {3, 5, 0},  // 4 -> 3, 5, 0
        {4}         // 5 -> 4
    };

    int target = 5;
    vector<vector<int>> ans;

    bfs(graph, 0, target, ans);
    for (auto& path : ans) {
        for (auto node : path) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}