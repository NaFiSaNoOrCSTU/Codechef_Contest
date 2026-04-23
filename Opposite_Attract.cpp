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
        vector<int> v;
        for (auto ch : s)
        {
            if (ch == '1')
                v.push_back(0);
            if (ch == '0')
                v.push_back(1);
        }
        for (auto val : v)
        {
            cout << val;
        }
        cout << endl;
    }
    return 0;
}