#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    if(x>15) cout << -1 << endl;
    else cout << 15-x << endl;
    return 0;
}