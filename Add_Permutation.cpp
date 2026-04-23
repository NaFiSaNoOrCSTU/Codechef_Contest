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
        vector<int> v(n),p(n);
        int dec=1,dig=200,cnt=1;
        for(int i=0;i<n;++i)
        {
            if(cnt<=k)
            {
                v[i]=dig;
            }
            else
            {
                cnt=1;
                dig=200;
                v[i]=dig;
            }
            dig+=2;
            cnt++;
        }
        for(int i=0;i<n;++i)
        {
            p[i]=v[i]-dec;
            dec++;
        }
        for(int i=0;i<n;++i)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N, K;
//         cin >> N >> K;
        
//         vector<int> P(N);
        
//         // First fill the array in increasing order: 1 to N
//         for (int i = 0; i < N; ++i)
//             P[i] = i + 1;
        
//         // Reverse last (N - K) elements to reduce the number of unique A[i] = P[i] + i
//         reverse(P.begin() + K, P.end());

//         // Output the permutation
//         for (int i = 0; i < N; ++i)
//             cout << P[i] << " ";
//         cout << "\n";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n,k;
//         cin >> n >> k;
//         vector<int> p(n);
//         for(int i=0;i<n;++i)
//         {
//             p[i]=i+1;
//         }
//         reverse(p.begin()+k,p.end());
//         for(int i=0;i<n;++i)
//         {
//             cout << p[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }