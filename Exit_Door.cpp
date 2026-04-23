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
        int d=0,d1=0,ans=0;
        while(n>0)
        {
            d=0,d1=0;
            int i;
            for(i=0;i<v.size();++i)
            {
                if(v[i]==n)
                {
                    for(int j=i-1;j>=0;--j)
                    {
                        d++;
                    }
                    for(int k=i+1;k<v.size();++k)
                    {
                        d1++;
                    }
                    ans+=min(d,d1);
                    break;
                }
            }
            n--;
            v.erase(v.begin()+i);
        }
        cout << ans << endl;
    }
    return 0;
}