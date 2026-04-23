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
        vector<int> h(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> h[i];
        }
        if (h[0] >= h[n - 1])
        {
            cout << n - 1 << endl;
            continue;
        }
        int cnt = 0, pos;
        ;
        for (int i = 0; i < n; ++i)
        {
            if (h[i] >= h[n - 1])
            {
                cnt = 1;
                pos = i + 1;
                break;
            }
        }
        (cnt) ? cout << n - pos << endl : cout << 0 << endl;
    }
    return 0;
}