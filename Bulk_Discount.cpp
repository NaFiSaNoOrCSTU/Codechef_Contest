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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long sum = v[0], x = 1;
        for (int i = 1; i < n; ++i)
        {
            int dif = v[i] - x;
            if (dif > 0)
            {
                sum += dif;
            }
            x++;
        }
        cout << sum << endl;
    }
    return 0;
}