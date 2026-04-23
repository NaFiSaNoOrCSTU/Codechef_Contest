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
        int n,k;
        cin >> n >> k;
        if((n-k)<=k) cout << n-k << endl;
        else cout << k << endl; 
    }
    return 0;
}