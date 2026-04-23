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
        int n, m;
        cin >> n >> m;
        vector<int> v(n), ans;
        long long s=0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            s+=v[i];
        }
        ans.push_back(s);
        int mn = *min_element(v.begin(), v.end());
        int step = m - mn;
        while (step--)
        {
            for (int i = 0; i < n; ++i)
            {
                v[i] = (v[i] + 1) % m;
            }
            s = accumulate(v.begin(), v.end(), 0);
            ans.push_back(s);
        }
        int res = *min_element(ans.begin(), ans.end());
        cout << res << endl;
    }
    return 0;
}