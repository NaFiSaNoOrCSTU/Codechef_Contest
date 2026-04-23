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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        long long sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            sum += v[i];
        }
        if (sum <= x)
            cout << 1 << endl;
        else
        {
            if (sum % x == 0)
                cout << sum / x << endl;
            else
                cout << n << endl;
        }
    }
    return 0;
}