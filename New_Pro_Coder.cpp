#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    float d = (float)n / 2.00;
    if (d > m)
        cout << "PRO" << endl;
    else
        cout << "NEWBIE" << endl;
    return 0;
}