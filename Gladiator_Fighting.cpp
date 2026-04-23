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
        long long mx,mn;
        int n1=n-2;
        mx=(n1*(n1+1))/2;
        cout << n1 << " " << mx << endl;
    }
    return 0;
}