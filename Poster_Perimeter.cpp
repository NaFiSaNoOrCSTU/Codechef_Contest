#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int mul = INT_MAX;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                int ans = 2 * (i + j);
                ans = abs(k - ans);
                mul = min(mul, ans);
            }
        }
        cout << mul << endl;
    }
    return 0;
}