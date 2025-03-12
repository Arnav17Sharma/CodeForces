// #include <iostream>
// using namespace std;

// long long count_valid_triplets(long long N) {
//     long long count = 0;
    
//     for (long long A = 1; A * A * A <= N; A++) {
//         for (long long B = A; A * B * B <= N; B++) {
//             long long max_C = N / (A * B);
//             count += (max_C - B + 1);
//         }
//     }
    
//     return count;
// }

// int main() {
//     long long N;
//     cout << "Enter N: ";
//     cin >> N;
//     cout << count_valid_triplets(N) << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int p1, p2;
    cout << "Enter Alex's current points (p1): ";
    cin >> p1;
    cout << "Enter Carla's current points (p2): ";
    cin >> p2;
    int requiredDifference = 10;
    int currentDifference = p1 - p2;
    int cnt = 0;
    while(currentDifference < 10) {
        currentDifference += 3;
        cnt++;
    }
    cout << cnt << endl;
}