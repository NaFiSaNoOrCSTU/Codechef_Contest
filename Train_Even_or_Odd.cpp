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
        int cnt_odd=0,cnt_even=0;
        for(int i=0;i<n;++i)
        {
            if(i%2==0) cnt_even+=v[i];
            else cnt_odd+=v[i];
        }
        if(cnt_odd>cnt_even) cout << cnt_odd << endl;
        else cout << cnt_even << endl;
    }
    return 0;
}