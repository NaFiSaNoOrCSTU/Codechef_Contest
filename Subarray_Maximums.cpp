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
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         if(s[0]=='0')
//         {
//             cout << -1 << endl;
//             continue;
//         }
//         else
//         {
//             for(int i=n;i>0;--i)
//             {
//                 cout << i << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        if (S.back() == '0') {
            cout << -1 << '\n';
            continue;
        }

        vector<int> P;
        for (int i = 0; i < N; ) {
            int j = i;
            while (j < N - 1 && S[j] == S[j + 1]) j++;
            // reverse this block of indices [i..j]
            for (int k = j + 1; k >= i + 1; --k)
                P.push_back(k);
            i = j + 1;
        }

        for (int i = 0; i < N; ++i)
            cout << P[i] << (i + 1 == N ? '\n' : ' ');
    }
    return 0;
}
