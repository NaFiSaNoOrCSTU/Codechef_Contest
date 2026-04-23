#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long solve(int n) {
    if (n <= 2) return 0;
    
    vector<int> a(n, 0);
    vector<int> target(n);
    for (int i = 0; i < n; i++) {
        target[i] = i + 1;
    }
    
    long long score = 0;
    
    // Strategy: Fill alternating positions first to break up zero segments
    // Then fill the remaining positions
    vector<int> order;
    
    // Fill odd indices first (1, 3, 5, ...)
    for (int i = 1; i < n; i += 2) {
        order.push_back(i);
    }
    // Then fill even indices (0, 2, 4, ...)
    for (int i = 0; i < n; i += 2) {
        order.push_back(i);
    }
    
    // Perform operations following the order
    for (int idx : order) {
        while (a[idx] < target[idx]) {
            a[idx]++;
            
            // Count Z: adjacent pairs of zeros
            int z = 0;
            for (int j = 0; j < n - 1; j++) {
                if (a[j] == 0 && a[j + 1] == 0) {
                    z++;
                }
            }
            score += z;
        }
    }
    
    return score;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    
    return 0;
}