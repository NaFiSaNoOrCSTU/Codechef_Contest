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
        int n,a,b;
        cin >> n >> a >> b;
        vector<int> v;
        while(n--)
        {
            int x,y,d;
            cin >> x >> y;
            d=abs(a-x)+abs(b-y);
            v.push_back(d);
        }
        sort(v.begin(),v.end());
        cout << v[0] << endl;
    }
    return 0;
}