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
        string a, b;
        cin >> a >> b;
        int bothOne = 0, oneZero = 0, zeroZero = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] == '1' && b[i] == '1')
                bothOne++;
            if ((a[i] == '0' && b[i] == '1') || (b[i] == '0' && a[i] == '1'))
                oneZero++;
        }
        if (bothOne % 2 == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            if (oneZero > 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}