#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, z;
    cin >> x >> y >> z;
    if ((y * z) > x)
        cout << -1 << endl;
    else
        cout << x - (y * z) << endl;
    return 0;
}