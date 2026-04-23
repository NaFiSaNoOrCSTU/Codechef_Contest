#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r,b,p,q;
    cin >> r >> b >> p >> q;
    if(p>q) cout << r*p << endl;
    else cout << b*q << endl;
    return 0;
}