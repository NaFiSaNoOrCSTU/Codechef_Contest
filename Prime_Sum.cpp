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
        int one = 0, two = 0, three = 0, p = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] == 1)
                one++;
            if (v[i] == 2)
                two++;
            if (v[i] == 3)
                three++;
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            if (one == 2)
            {
                cout << 1 + (one * two) + (two * three) << endl;
            }
            else if (one > 2)
            {
                if(one%2==0)
                {
                    long long x=(one-1)*(one/2);
                    cout << x + (one * two) + (two * three) << endl;
                }
                else
                {
                    long long x=one*((one-1)/2);
                    cout << x + (one * two) + (two * three) << endl;
                }
            }
            else if (one == 1)
            {
                cout << (one * two) + (two * three) << endl;
            }
            else if(one == 0)
            {
                cout << (two*three) << endl;
            }
        }
    }
    return 0;
}