#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,c;
        cin >> n >> c;
        vector<int> v(n);
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
        }
        int xtra=0;
        while(1)
        {
            int cur=c+xtra;
            bool hasLess=false;
            bool hasEqual=false;
            for(int i=0;i<n;++i)
            {
                if(v[i]==cur) hasEqual=true;
                if(v[i]<cur) hasLess=true;
            }
            if(hasLess && !hasEqual)
            {
                cout << xtra << endl;
                break;
            }
            xtra++;
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
//         int n, c;
//         cin >> n >> c;
//         vector<int> v(n);
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> v[i];
//         }

//         int extra = 0;
//         while (true)
//         {
//             int current = c + extra;
//             bool hasLess = false;
//             bool hasEqual = false;

//             for (int i = 0; i < n; ++i)
//             {
//                 if (v[i] < current) hasLess = true;
//                 if (v[i] == current) hasEqual = true;
//             }

//             if (hasLess && !hasEqual)
//             {
//                 cout << extra << '\n';
//                 break;
//             }
//             extra++;
//         }
//     }

//     return 0;
// }
