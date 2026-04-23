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
        int x,y;
        cin >> x >> y;
        int n=x+y;
        if((n/3) <= y) 
        {
            cout << (n/3)*2 << endl;
        }
        else if((n/3)>y)
        {
            cout << (y*2)+(n-(y*3))/3 << endl;
        }
    }
    return 0;
}