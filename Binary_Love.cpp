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
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            if (s[i] == '0' && s[i + 1] == '1')
                c1++;
            if (s[i] == '1' && s[i + 1] == '0')
                c2++;
        }
        if (c1 > 0 && c2 > 0)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}