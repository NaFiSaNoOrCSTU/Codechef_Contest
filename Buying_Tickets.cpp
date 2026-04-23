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
        int n,k;
        cin >> n >> k;
        vector<int> cost(n),ans;
        for(int i=0;i<n;++i)
        {
            cin >> cost[i];
        }
        string occu;
        cin >> occu;
        int zero=0;
        for(auto it:occu)
        {
            if(it == '0') zero++;
        }
        if(zero < k) cout << -1 << endl;
        else
        {
            for(int i=0;i<n;++i)
            {
                if(occu[i]=='0')
                {
                    ans.push_back(cost[i]);
                }
            }
            sort(ans.begin(),ans.end());
            long long am=0;
            for(int i=0;i<k;++i)
            {
                am+=ans[i];
            }
            cout << am << endl;
        }
    }
    return 0;
}