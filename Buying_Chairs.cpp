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
        int w,p,k,ans;
        cin >> w >> p >> k;
        if(w>=k)
        {
            ans=k*2;
        }
        else if(w<k)
        {
            ans=w*2;
            k=k-w;
            ans+=k;
        }
        cout << ans << endl;
    }
    return 0;
}