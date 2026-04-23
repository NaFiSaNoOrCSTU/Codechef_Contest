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
        int n,ans;
        cin >> n;
        ans=n;
        for(int i=1;i<n;++i)
        {
            if(i%2==0)
            {
                ans=ans+(n-i);
            }
            else
            {
                ans=ans-(n-i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}