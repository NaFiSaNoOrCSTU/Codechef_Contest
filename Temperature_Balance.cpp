// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         vector<ll> A(N);
//         for (int i = 0; i < N; ++i) {
//             cin >> A[i];
//         }

//         ll positive_sum = 0, imbalance = 0;

//         for (int i = 0; i < N; ++i) {
//             imbalance += A[i];
//             positive_sum += abs(imbalance);
//         }

//         cout << positive_sum << "\n";
//     }

//     return 0;
// }
