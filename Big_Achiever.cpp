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
        for (int i = 0; i < n; ++i)
        {
            int cnt = 0;
            for (int j = 0; j < i; ++j)
            {
                if (v[i] < v[j])
                {
                    cnt++;
                    continue;
                }
            }
            cnt == 0 ? cout << 1 << " " : cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}