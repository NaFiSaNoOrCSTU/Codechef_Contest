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
        bool one = false, zero = false;
        for (auto ch : s)
        {
            if (ch == '1')
                one = true;
            else if (ch == '0')
                zero = true;
        }
        if (zero && one)
            cout << 1 << endl;
        else
            cout << n << endl;
    }
    return 0;
}