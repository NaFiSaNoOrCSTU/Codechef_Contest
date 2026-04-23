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
        int x,y;
        cin >> x >> y;
        int dif=50-x;
        int f = y*2;
        y=(y+5)+(y+5);
        if(diff >= f && diff <= y) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}