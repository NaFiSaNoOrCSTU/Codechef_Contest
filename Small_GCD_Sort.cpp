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
        set<int> s;
        vector<int> v,ans;
        map<int,vector<int>> mp;
        for(int i=1;i<=n;++i)
        {
            int score=__gcd(i,n);
            s.insert(score);
            mp[score].push_back(i);
        }
        for(auto val:s)
        {
            v.push_back(val);
        }
        sort(v.rbegin(),v.rend());
        for(auto val:v)
        {
            for(auto x:mp[val])
            {
                ans.push_back(x);
            }
        }
        int l=ans.size()-1;
        for(int i=0;i<=l;++i)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}