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
        string s;
        cin >> s;
        int safe=0;
        for(auto val:s)
        {
            if(val == '0')
            {
                safe++;
            }
            else if(val=='1')
            {
                break;
            }
        }
        cout << safe << endl;
    }
    return 0;
}