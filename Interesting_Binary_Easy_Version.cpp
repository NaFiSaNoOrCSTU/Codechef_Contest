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
        int z=0,o=0;
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
            if(v[i]==0) z=1;
            if(v[i]==1) o=1;
        }
        if(z==1 && o==1)
        {
            cout << n-2 << endl;
        }
        else if(z==1 && o==0)
        {
            cout << n-1 << endl;
        }
        else if(z==0 && o==1)
        {
            cout << n-1 << endl;
        }
        else if(z==0 && o==0)
        {
            cout << n << endl;
        }
    }
    return 0;
}