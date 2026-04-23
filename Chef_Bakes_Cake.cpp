#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x,y;
    cin >> n >> x >> y;
    int cake;
    cake=y/x;
    //cout << cake << endl;
    int ans=n/cake;
    if(n%cake != 0) ans+=1;
    cout << ans << endl;
    return 0;
}