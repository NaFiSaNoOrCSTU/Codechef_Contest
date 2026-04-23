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
        int c00=0,c11=0;
        for(int i=0;i<n-1;++i)
        {
            if(s[i]=='0' && s[i+1]=='0') c00++;
            if(s[i]=='1' && s[i+1]=='1') c11++;
        }
        if(c11 >= c00) 
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            cout << (c00-c11+1)/2 << endl;
        }
    }
    return 0;
}