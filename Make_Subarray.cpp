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
        int fst=-1,lst=-1;
        for(int i=0;i<n;++i)
        {
            if(s[i]=='1')
            {
                fst=i;
                break;
            }
        }
        for(int i=n-1;i>=0;--i)
        {
            if(s[i]=='1')
            {
                lst=i;
                break;
            }
        }
        int cnt=0;
        for(int i=fst;i<=lst;++i)
        {
            if(s[i]=='0') cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}