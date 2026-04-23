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
//         int n;
//         cin >> n;
//         string s, t;
//         cin >> s >> t;
//         if (n == 2)
//         {
//             int oneS = 0, oneT = 0, zeroS = 0, zeroT = 0;
//             for (int i = 0; i < n; ++i)
//             {
//                 if (s[i] == '1')
//                     oneS++;
//                 if (t[i] == '1')
//                     oneT++;
//                 if (s[i] == '0')
//                     zeroS++;
//                 if (t[i] == '0')
//                     zeroT++;
//             }
//             if (oneT == oneS || zeroS == zeroT || zeroS == oneT || zeroT == oneS)
//                 cout << "YES" << endl;
//             else
//                 cout << "NO" << endl;
//         }
//         else
//             cout << "YES" << endl;
//     }
//     return 0;
// }
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
        string s, t;
        cin >> s >> t;
        int dif = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] != t[i])
                dif++;
        }
        if (dif == 0 || dif == n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
