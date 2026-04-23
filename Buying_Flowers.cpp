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
        if(n%3==0) cout << (n/3)*5 << endl;
        else if(n%3==1)
        {
            n=n-4;
            int cost=(n/3)*5;
            cost+=8;
            cout << cost << endl;
        }
        else if(n%3==2)
        {
            n=n-2;
            int c=(n/3)*5;
            c+=4;
            cout << c << endl;
        }
    }
    return 0;
}