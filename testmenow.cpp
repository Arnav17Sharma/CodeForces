#include <iostream>
#include <string>

using namespace std;

string addBinary(string str1, string str2) {
    int n = str1.size();
    int m = str2.size();
    int carry = 0;
    string result = "";

    // Start adding from the rightmost digits
    while (n > 0 || m > 0 || carry) {
        int bit1 = n > 0 ? str1[--n] - '0' : 0;
        int bit2 = m > 0 ? str2[--m] - '0' : 0;

        int sum = bit1 + bit2 + carry;
        carry = sum / 2;
        result = char(sum % 2 + '0') + result;
    }

    return result;
}

int main() {
    string str1 = "111";
    string str2 = "11";
    cout << "Sum: " << addBinary(str1, str2) << endl;
    return 0;
}