#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin >> a >> b;
    float r=((a+1)*4)+(b*3);
    int result=ceil(r/8);
    cout << result << endl;
    return 0;
}