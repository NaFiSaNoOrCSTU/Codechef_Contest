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
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
        }
        set<long long> s;
        int ans=0;
        for(int i=n-1;i>=0;--i) // --> Prefix unit
        {
            if(s.count(v[i]))
            {
                ans++; // --> X-OR prefix unit with large value
                s.clear(); // --> clear distinct set,work with prefix one
            }
            s.insert(v[i]);
        }
        cout << ans << endl;
    }
    return 0;
}