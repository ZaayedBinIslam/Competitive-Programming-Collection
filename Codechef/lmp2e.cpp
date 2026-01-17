// Bismillahir Rahmanir Raheem
// Created: 17 Jan 2026
// Author: zbi
// done

#include <bits/stdc++.h>

using namespace std;

#define faster                                                                                     \
    ios_base::sync_with_stdio(false);                                                              \
    cin.tie(NULL)
#define getUnique(v)                                                                               \
    {                                                                                              \
        sort(v.begin(), v.end());                                                                  \
        v.erase(unique(v.begin(), v.end()), v.end());                                              \
    }
#define nl "\n"

typedef long long      ll;
typedef vector<int>    vi;
typedef vector<ll>     vl;
typedef pair<int, int> pii;
typedef pair<ll, ll>   pll;

int main() {
    faster;

    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        vi   v(n);
        int  cnt    = 0;
        bool jacket = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (!jacket) {
                if (x < a) {
                    cnt++;
                    jacket = 1;
                }
            } else {
                if (x > b)
                    jacket = 0;
            }
        }
        cout << cnt << nl;
    }

    return 0;
}