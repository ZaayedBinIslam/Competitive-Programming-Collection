// Bismillahir Rahmanir Raheem
// Created: 17 Oct 2025
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
        int n;
        cin >> n;
        vi  v(n);
        int mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        cout << mx << nl;
    }

    return 0;
}