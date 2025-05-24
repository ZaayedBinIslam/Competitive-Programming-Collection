// Created on 24-May-25
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#ifndef ONLINE_JUDGE
#define REDIRECT_IO \
    freopen("input.txt", "r", stdin);   \
    freopen("output.txt", "w", stdout); \
    freopen("error.txt", "w", stderr);
#else
#define REDIRECT_IO
#endif


#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'


int main() {
    faster;
//    REDIRECT_IO;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        auto maxFreq = max_element(mp.begin(), mp.end(), [](const auto &a, const auto &b) {
            return a.second < b.second;
        });

        if (maxFreq->second == n) {
            cout << 0 << nl;
        } else {
            int cnt = 0;
            int maxF = maxFreq->second;
            while (maxF < n) {
                if (maxF * 2 > n) {
                    int var = n - maxF;
                    cnt += var + 1;
                    break;
                } else {
                    cnt += (1 + maxF);
                    maxF *= 2;
                }
            }
            cout << cnt << nl;

        }

    }
    return 0;
}