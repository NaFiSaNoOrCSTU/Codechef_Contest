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
        int n, ved, varun;
        cin >> n >> ved >> varun;
        vector<int> v(n);
        long long h, h1, sum = 0;
        int mx = INT_MIN;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] > mx)
            {
                mx = v[i];
            }
            sum += v[i];
        }
        // for (int i = 0; i < n; ++i)
        // {
        //     if (v[i] == mx)
        //         h += v[i];
        //     else
        //         h1 += v[i];
        // }
        h = ved + mx;
        h1 = (sum - mx) + varun;
        if (h > h1)
            cout << "Ved" << endl;
        else if (h < h1)
            cout << "Varun" << endl;
        else if (h == h1)
            cout << "Equal" << endl;
    }
    return 0;
}