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
        int n,x,k;
        cin >> n >> x >> k;
        vector<int> v(n);
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
        }
        x+=(k*100);
        sort(v.rbegin(),v.rend());
        for(int i=0;i<k;++i)
        {
            v[i]=0;
        }
        v.push_back(x);
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();++i)
        {
            if(v[i]==x)
            {
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}