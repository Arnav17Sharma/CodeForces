// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <climits>
#include <bits/stdc++.h>

using namespace std;


// vector<int> teamSize(vector<int>& talents, int talentsCount) {
//     int n = talents.size();
//     vector<int> result(n, -1);
    
//     unordered_map<int, int> curr;
//     int ut = 0;
//     int start = 0;

//     for (int end = 0; end < n; ++end) {
//         int talent = talents[end];
//         if (curr[talent] == 0) {
//             ut++;
//         }
//         curr[talent]++;
//         while (ut == talentsCount) {
//             result[start] = end - start + 1;
//             curr[talents[start]]--;
//             if (curr[talents[start]] == 0) {
//                 ut--;
//             }
//             start++;
//         }
//     }
//     return result;
// }

// int minimumInsertionsRequired(string& s) {
//     int opening = 0, closing = 0;
//     for(char c: s) {
//         if(c == '(')
//             opening++;
//         else {
//             if (opening > 0)
//                 opening--;
//             else closing++;
//         }
//     }
//     return opening + closing;
// }

// string breakPalindrome (string palindromestr) {
//     int n = palindromestr.size();
//     if(n == 1)
//         return "IMPOSSIBLE";
//     for(int i = 0; i < n; i++) {
//         if (palindromestr[i] != 'a') {
//             palindromestr[i] = 'a';
//             return palindromestr;
//         }
//     }
//     return "IMPOSSIBLE";
// }




// int main() {
//     string s;
//     cin >> s;
//     // int insertions = minimumInsertionsRequired(s);
//     // cout << "Minimum insertions needed are:" << insertions << endl;
//     cout << "Break Palindrome: " << breakPalindrome(s) << endl;
//     return 0;
// }

// // int main() {
// //     vector<int> talents = {1, 2, 3, 2, 1};
// //     int talentsCount = 3;
    
// //     vector<int> result = teamSize(talents, talentsCount);
    
// //     for (int length : result) {
// //         cout << length << " ";
// //     }
// //     cout << endl;
    
// //     return 0;
// // }


// #include <iostream>
// #include <vector>
// #include <climits>

// using namespace std;

// int minSubArrayLen(int target, vector<int>& nums) {
//     int n = nums.size();
//     int start = 0;
//     int current_sum = 0;
//     int min_length = n + 1; // Initialize to a value larger than possible subarray size

//     for (int end = 0; end < n; ++end) {
//         current_sum += nums[end];

//         // Optimize by reducing unnecessary comparisons
//         while (current_sum >= target) {
//             min_length = min(min_length, end - start + 1);
//             current_sum -= nums[start++];
//         }
//     }

//     return (min_length <= n) ? min_length : 0; // Simplified check
// }

// int main() {
//     vector<int> nums1 = {1, 4, 4};
//     int target1 = 4;
//     cout << "Output: " << minSubArrayLen(target1, nums1) << endl;  // Output: 1

//     vector<int> nums2 = {1, 1, 1, 1, 1, 1, 1, 1};
//     int target2 = 11;
//     cout << "Output: " << minSubArrayLen(target2, nums2) << endl;  // Output: 0

//     return 0;
// }


// def minSubArrayLen(nums, target):
//     n = len(nums)
//     start = 0
//     current_sum = 0
//     min_length = n + 1
//     for end in range(n):
//         current_sum += nums[end]
//         while current_sum >= target:
//             min_length = min(min_length, end - start + 1)
//             current_sum -= nums[start]
//             start += 1
//     return min_length if min_length <= n else 0 



// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int last_animal_name_length(string animal_sequence) {
//     string trimmed_sequence = animal_sequence;
//     trimmed_sequence.erase(0, trimmed_sequence.find_first_not_of('-'));
//     trimmed_sequence.erase(trimmed_sequence.find_last_not_of('-') + 1);
//     if (trimmed_sequence.empty()) {
//         return 0;
//     }
//     size_t last_dash = trimmed_sequence.find_last_of('-');
//     if (last_dash == string::npos) {
//         return trimmed_sequence.length();
//     }
//     return trimmed_sequence.length() - last_dash - 1;
// }

// int main() {
//     string animal_sequence = "cat-dog-elephant--giraffe-";
//     int result = last_animal_name_length(animal_sequence);
//     cout << "Length of the last animal name: " << result << endl;
    
//     return 0;
// }


// long minFriends(int numNodes, int numEdges) {
//     int low = 1, high = numNodes;
//     int result = 1;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         int edges_needed = (mid * (mid - 1)) / 2;
        
//         if (edges_needed <= numEdges) {
//             result = mid;
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return result;
// }


// using namespace std;

// class DisjointSet {
//     vector<int> parent, rank;
// public:
//     DisjointSet(int n) {
//         parent.resize(n);
//         rank.resize(n, 0);
//         for (int i = 0; i < n; i++) parent[i] = i;
//     }
    
//     int find(int x) {
//         if (parent[x] != x) parent[x] = find(parent[x]);
//         return parent[x];
//     }
    
//     void unite(int x, int y) {
//         int px = find(x), py = find(y);
//         if (px == py) return;
//         if (rank[px] < rank[py]) parent[px] = py;
//         else if (rank[px] > rank[py]) parent[py] = px;
//         else {
//             parent[py] = px;
//             rank[px]++;
//         }
//     }
// };

// long long minimumCost(int n, int c_link, int c_service, vector<pair<int, int>>& connections) {
//     DisjointSet ds(n);
//     vector<pair<int, pair<int, int>>> edges;
    
//     for (const auto& conn : connections) {
//         edges.push_back({c_link, {conn.first - 1, conn.second - 1}});
//     }
    
//     sort(edges.begin(), edges.end());
    
//     long long mst_cost = 0;
//     int components = n;
    
//     for (const auto& edge : edges) {
//         int u = edge.second.first, v = edge.second.second;
//         if (ds.find(u) != ds.find(v)) {
//             ds.unite(u, v);
//             mst_cost += c_link;
//             components--;
//         }
//     }
    
//     long long total_cost = mst_cost + (long long)components * c_service;
//     long long all_service_cost = (long long)n * c_service;
    
//     return min(total_cost, all_service_cost);
// }

// int main() {
//     int n, m, c_link, c_service;
//     cin >> n >> m >> c_link >> c_service;
    
//     vector<pair<int, int>> connections(m);
//     for (int i = 0; i < m; i++) {
//         cin >> connections[i].first >> connections[i].second;
//     }
    
//     long long result = minimumCost(n, c_link, c_service, connections);
//     cout << result << endl;
    
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

long minFriends(int numNodes, int numEdges) {
    long n = numNodes, e = numEdges;
    
    // If there are 2 nodes, the only possible group size is 2.
    if(n == 2)
        return 2;
    
    // If there are 3 nodes, check for 3 edges to form a complete triangle.
    if(n == 3)
        return e == 3 ? 3 : 2;
    
    // If the number of edges is less than or equal to the number of nodes, the max group size is 2.
    if(e <= n)
        return 2;
    
    // If the number of edges is less than or equal to 2n - 3, the max group size is 3.
    if(e <= 2 * n - 3)
        return 3;
    
    long curr = 2 * n - 3;
    
    // Try to find the maximum group size by iterating over possible sizes.
    for(int i = 4; i <= n; i++) {
        curr += n - i + 1;
        
        // If edges are not enough for this group size, return the previous valid group size.
        if(e < curr)
            return i - 1;
        
        // If exactly equal, return the current group size.
        if(e == curr)
            return i;
    }
    
    // If all nodes can form a complete group, return n.
    return n;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));
    
    string numNodes_temp;
    getline(cin, numNodes_temp);
    int numNodes = stoi(numNodes_temp);
    
    string numEdges_temp;
    getline(cin, numEdges_temp);
    int numEdges = stoi(numEdges_temp);

    long result = minFriends(numNodes, numEdges);
    
    fout << result << "\n";
    fout.close();
    
    return 0;
}
