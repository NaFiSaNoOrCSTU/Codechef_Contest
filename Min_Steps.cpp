#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long N, D;
        cin >> N >> D;

        long long steps = 0;
        bool possible = true;

        while (N > 1) {
            if (N % 2 == 0) {
                N /= 2;
            } else {
                N -= D;
            }
            steps++;
            if (N < 1) {
                possible = false;
                break;
            }
        }

        if (possible && N == 1) cout << steps << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}
