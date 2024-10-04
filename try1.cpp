#include <iostream>
#include <string>

using namespace std;

const int MOD = 1007;

int main() {
    string s;
    cin >> s;
    if (s.empty()) {  // Handle empty string case
        cout << 0 << endl;
        return 0;
    }
    long long result = 1;
    int count = 1;  // Start with 1 because there's at least one character
    // Iterate through the string to identify groups of consecutive identical characters
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            count++;  // Increment the count for consecutive characters
        } else {
            result = (result * count) % MOD;  // Update the result with possibilities for this group
            count = 1;  // Reset the count for the next group
        }
    }
    // Account for the last group
    result = (result * count) % MOD;
    cout << result << endl;
    return 0;
}