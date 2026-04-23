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
        int cnt = 1;
        if (n >= 2)
        {
            for (int i = 0; i < n - 1; ++i)
            {
                //cout << (v[i]-v[i+1]) %2 << endl;
                if ((v[i] - v[i + 1]) % 2 != 0)
                {
                    //cout << (v[i]-v[i+1]) %2 << endl;
                    cnt++;
                    //cout << cnt << endl;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}