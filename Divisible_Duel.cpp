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
        int x,y;
        cin >> x >> y;
        vector<int > e,o;
        for(int i=x;i<=y;++i)
        {
            if(i%x == 0)
            {
                if(i%2 == 0)
                {
                    e.push_back(i);
                }
                else
                {
                    o.push_back(i);
                }
            }
        }
        long long se=0,so=0;
        for(auto val:e)
        {
            se+=val;
        }
        for(auto val:o)
        {
            so+=val;
        }
        if(se>=so) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}