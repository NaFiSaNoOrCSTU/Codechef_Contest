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
        string s;
        cin >> s;
        int cnt=0,ind;
        for(int i=0;i<n;++i)
        {
            if(s[i]=='0')
            {
                ind=i;
                break;
            }
        }
        for(int i=ind+1;i<n;++i)
        {
            if(s[i]=='1')
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}