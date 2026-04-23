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
        int r[3]={0};
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
            r[v[i]%3]++;
        }
        if(r[0]>0)
        {
            cout << "Yes" << endl;
        }
        else if(r[1]>0 && r[2]>0)
        {
            cout << "Yes" << endl;
        }
        else if(r[1]>=3 || r[2]>=3)
        {
            cout << "Yes" << endl;
        }
        else
        {
        cout << "No" << endl;
        }
    }
    return 0;
}