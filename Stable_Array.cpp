// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> v[i];
//         }
//         vector<int> copy;
//         copy = v;
//         sort(copy.begin(), copy.end());
//         if (copy == v)
//         {
//             cout << n - 1 << endl;
//             continue;
//         }
//         sort(copy.rbegin(), copy.rend());
//         if (copy == v)
//         {
//             cout << 0 << endl;
//             continue;
//         }
//         int step = 0, cnt = 1;
//         copy.clear();
//         while (cnt)
//         {
//             cnt = 0;
//             copy = v;
//             for (int i = 0; i < n - 1; ++i)
//             {
//                 if (v[i] < v[i + 1])
//                 {
//                     copy[i] = copy[i + 1];
//                     cnt = 1;
//                 }
//             }
//             if (cnt)
//             {
//                 step++;
//                 v = copy;
//             }
//         }
//         cout << step << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> a(n);

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     int seconds = 0;
//     bool changed = true;

//     while (changed) {
//         changed = false;
//         vector<int> new_a = a;

//         for (int i = 0; i < n - 1; i++) {
//             if (a[i] < a[i + 1]) {
//                 new_a[i] = a[i + 1];
//                 changed = true;
//             }
//         }

//         if (changed) {
//             seconds++;
//             a = new_a;
//         }
//     }

//     cout << seconds << "\n";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         solve();
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int s = 0, curr = 1;
        int ans = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            if (i != curr)
            {
                s = 0;
            }
            if (v[i] > v[i - 1])
            {
                s++;
                v[i - 1] = v[i];
                ans = max(ans, s);
                curr = i - 1;
                if (i > 1)
                {
                    i -= 2;
                }
            }
        }
        if (ans == INT_MIN)
        {
            ans = 0;
        }
        cout << ans << endl;
    }
}