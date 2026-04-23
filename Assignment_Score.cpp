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
        int need = 0, total = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            total += x;
        }
        int per = ((n + 1) * 100) * 0.5;
        need = per - total;
        if (need <= 100 && need > 0)
            cout << need << endl;
        else if (need < 0)
            cout << 0 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}