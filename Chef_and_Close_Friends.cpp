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
        int x,y,z;
        cin >> x >> y >> z;
        int x1,y1,x2,y2;
        x1=x-y;
        y1=x+y;
        x2=x-z;
        y2=x+z;
        int cnt=0;
        for(int i=x2;i<=y2;++i)
        {
            if((i!=x) && (i>=x1) && (i<=y1)) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}