#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isGoodString(const string& s) {
    int balance = 0;
    for (char c : s) {
        if (c == '1') balance++;
        else balance--;
        if (balance < 0) return false;
    }
    return balance == 0;
}

vector<pair<int, int>> findGoodSubstrings(const string& s) {
    vector<pair<int, int>> goodSubstrings;
    int n = s.length();
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            string substr = s.substr(i, j - i + 1);
            if (isGoodString(substr)) {
                goodSubstrings.push_back({i, j});
            }
        }
    }
    
    return goodSubstrings;
}

string optimizeBinaryString(string binString) {
    vector<pair<int, int>> goodSubstrings = findGoodSubstrings(binString);
    
    // Sort good substrings by their numeric value (descending order)
    sort(goodSubstrings.begin(), goodSubstrings.end(), [&binString](const auto& a, const auto& b) {
        return binString.substr(a.first, a.second - a.first + 1) > binString.substr(b.first, b.second - b.first + 1);
    });
    
    // Reconstruct the string using sorted good substrings
    string result(binString.length(), '0');
    for (const auto& [start, end] : goodSubstrings) {
        for (int i = start; i <= end; i++) {
            result[i] = binString[i];
        }
    }
    
    return result;
}

int main() {
    string binString;
    cout << "Enter a good binary string: ";
    cin >> binString;
    
    string optimized = optimizeBinaryString(binString);
    cout << "Optimized string: " << optimized << endl;
    
    return 0;
}