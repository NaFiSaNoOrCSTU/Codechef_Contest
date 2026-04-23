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
        int n,x;
        cin >> n >> x;
        long long pr=0;
        for(int i=x+1;i<=n;++i)
        {
            pr+=(i-x);
        }
        cout << pr << endl;
    }
    return 0;
}