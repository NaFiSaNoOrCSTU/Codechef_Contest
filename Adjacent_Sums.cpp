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
        long long op=0;
        cin >> n;
        vector<long long> v(n);
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
        }
        if(n==2)
        {
            cout << abs(v[0]-v[1]) << endl;
        }
        else if(n==3 && n==4)
        {
            op+=abs(v[1]-v[0])+abs(v[n-1]-v[n-2]);
            cout << op << endl;
        }
         else if(n==5)
        {
            op+=abs(v[1]-v[0])+abs(v[n-1]-v[n-2]);
            if(v[2]!=v[1])
            {
                op+=v[2];
            }
            cout << op << endl;
        }
        else if(n==6)
        {
            op+=abs(v[1]-v[0])+abs(v[n-1]-v[n-2]);
            int p,q;
            p=abs(v[3]-(v[2]+v[4]));
            q=abs(v[2]-(v[3]+v[1]));
            op+=min(p,q);
            cout << op << endl;
        }
        else
        {
             op+=abs(v[1]-v[0])+abs(v[n-1]-v[n-2]);
             if(v[2]==v[1] && v[n-2]==v[n-3])
            {
                for(int i=3;i<=(n-4);++i)
                {
                    op+=v[i];
                }
            }
            else if(v[2]==v[1] && v[n-2]!=v[n-3])
            {
                for(int i=3;i<=(n-3);++i)
                {
                    op+=v[i];
                }
            }
            else if(v[2]!=v[1] && v[n-2]==v[n-3])
            {
                for(int i=2;i<=(n-4);++i)
                {
                    op+=v[i];
                }
            }
            else if(v[2]!=v[1] && v[n-2]!=v[n-3])
            {
               for(int i=2;i<=(n-3);++i)
                {
                    op+=v[i];
                }
            }
            cout << op << endl;
        }
    }
    return 0;
}