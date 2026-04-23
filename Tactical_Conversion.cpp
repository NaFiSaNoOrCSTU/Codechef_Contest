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
        string s;
        cin >> s;
        int cnt = 0, one = 0;
        for (auto x : s)
        {
            if (x == '1')
                one++;
        }
        if (one == 2)
        {
            for (int i = 0; i < n - 1; ++i)
            {
                if (s[i] == '1' && s[i + 1] == '1')
                {
                    cnt = 1;
                    break;
                }
            }
        }
        else if (one == 3)
        {
            for (int i = 0; i < n - 2; ++i)
            {
                if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '1')
                {
                    cnt = 1;
                    break;
                }
            }
        }
        if (cnt)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
