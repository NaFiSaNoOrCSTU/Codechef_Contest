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
        long long n,k;
        cin >> n >> k;
        long long min1=LLONG_MAX,min2=LLONG_MAX;
        long long sum=0;
        for(int i=0;i<n;++i)
        {
            int x;
            cin >> x;
            sum+=x;
            if(x<min1)
            {
                min2=min1;
                min1=x;
            }
            else if(x<min2)
            {
                min2=x;
            }
        }
        int add;
        if((min1+min2)%2==0) 
        {
            add=(min1+min2)/2;
        }
        else if((min1+min2)%2!=0)
        {
            add=(min1+min2+1)/2;
        }
        sum+=(k*add);
        cout << sum << endl;
    }
    return 0;
}


