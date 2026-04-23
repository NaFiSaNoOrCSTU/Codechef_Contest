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
        vector<int> v(n),odd,even;
        //int odd=0;
        for(int i=0;i<n;++i)
        {
            cin >> v[i];
            if(v[i]%2 != 0) odd.push_back(v[i]);
            else even.push_back(v[i]);
        }
        vector<int> rearranged;
        rearranged.insert(rearranged.end(), odd.begin(), odd.end());
        rearranged.insert(rearranged.end(), even.begin(), even.end());
        long long sum=0;
        for(auto val:rearranged)
        {
            sum+=val;
        }
        if(sum%2 == 0) cout << "No" << endl;
        else cout << "Yes" << endl;

    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// bool allPrefixSumsOdd(const vector<int>& arr) {
//     long long sum = 0;
//     for (int x : arr) {
//         sum += x;
//         if (sum % 2 == 0)
//             return false; // Found an even prefix sum → invalid
//     }
//     return true;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> v(n), odd, even;

//         for (int i = 0; i < n; ++i) {
//             cin >> v[i];
//             if (v[i] % 2 == 0)
//                 even.push_back(v[i]);
//             else
//                 odd.push_back(v[i]);
//         }

//         // Rearranged: odds first, then evens
//         vector<int> rearranged;
//         rearranged.insert(rearranged.end(), odd.begin(), odd.end());
//         rearranged.insert(rearranged.end(), even.begin(), even.end());

//         if (allPrefixSumsOdd(rearranged))
//             cout << "Yes\n";
//         else
//             cout << "No\n";
//     }

//     return 0;
// }
