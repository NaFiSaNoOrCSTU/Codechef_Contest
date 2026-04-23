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
        long long time=n*k;
        long long h=time/60;
        long long m=time-(h*60);
        cout << h << " " << m << endl;
    }
    return 0;
}