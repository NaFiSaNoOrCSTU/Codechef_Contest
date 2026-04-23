#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin >> a >> b >> c;
    int rect=a*b;
    int sqr=c*c;
    (rect == sqr) ? cout << "Yes" << endl : cout << "No" << endl;
    return 0;
}