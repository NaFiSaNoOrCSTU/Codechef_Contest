// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n-1);
//         int mx=INT_MIN;
//         for(int i=0;i<n-1;++i)
//         {
//             cin >> v[i];
//             mx=max(mx,v[i]);
//         }
//         //cout << mx << endl;
//         sort(v.begin(),v.end());
//         vector<int> ans;
//         int sum=0;
//         int ind=0;
//         int val=1;
//         ans.push_back(val);
//         int i=1;
//             for(int j=i;j<mx;++j)
//             {
//                 sum=val+j;
//                 if(sum==v[ind])
//                 {
//                     ans.push_back(j);
//                     val=j;
//                     ind++;
//                     break;
//                 }
//                 i=1;
//             }
//         for(auto a:ans)
//         {
//             cout << a << " ";
//         }
//         cout << endl;
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
        vector<int> v(n - 1);
        int mx = INT_MIN;
        for (int i = 0; i < n - 1; ++i)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        sort(v.begin(), v.end());
        vector<int> ans;
        int val = 1;
        ans.push_back(val);
        int ind = 0;
        while (ans.size() < n)
        {
            int next = v[ind] - val;
            if (next > 0)
            {
                ans.push_back(next);
                val = next;
                ind++;
            }
        }
        for (auto a : ans)
        {
            cout << a << " ";
        }
        cout << endl;
    }

    return 0;
}
