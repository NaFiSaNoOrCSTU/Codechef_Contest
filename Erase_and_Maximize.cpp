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
        int n,s;
        cin >> n >> s;
        if(5*n>=s)
        {
            cout << 6*n << endl;
        }
        else
        {
            cout << (6*n)-(s-(5*n)) << endl;
        }
    }
    return 0;
}