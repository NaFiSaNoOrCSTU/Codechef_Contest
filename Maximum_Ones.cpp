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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for (auto ch : s)
        {
            if (ch == '1')
                one++;
            else if (ch == '0')
                zero++;
        }
        if (one == 0)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            if (zero >= k)
                one += k;
            else
                one = n;
            cout << one << endl;
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         int one = 0, zero = 0;
//         for (auto ch : s)
//         {
//             if (ch == '1')
//                 one++;
//             else if (ch == '0')
//                 zero++;
//         }
//         if(one>0) cout << k+1 << endl;
//         else cout << 0 << endl;
//     }
//     return 0;
// }