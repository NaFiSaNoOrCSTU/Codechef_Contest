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
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        if(x>a) cout << a+b << endl;
        else
        {
            int d=a/x;
            int d1=a%x;
            cout << (d*y)+b+d1 << endl;
        }
    }
    return 0;
}