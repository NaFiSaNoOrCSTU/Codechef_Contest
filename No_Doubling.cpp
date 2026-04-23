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
        vector<long long> v(n);
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int l=0,r=n-1;
        while(l <= r)
        {
            if(l!=r) cout << v[l] << " " << v[r] << " ";
            else cout << v[l] << " ";
            l++;
            r--;
        }
        cout << endl;
    }
    return 0;
}