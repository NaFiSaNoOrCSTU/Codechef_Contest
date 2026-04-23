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
        string st;
        cin >> st;
        int a = 0, b = 0, r, cnt = 0;
        for (auto val : st)
        {
            if (val == '1')
                a++;
            else if (val == '0')
                b++;
        }
        if (n % 2 != 0)
        {
            cout << "No" << endl;
            continue;
        }
        else
        {
            r = n - m;
            int ach=n/2;
            if(a<=ach && (ach-a)<=r && b<=ach && (ach-b)<=r) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}