// Bismillahir Rahmanir Raheem
// Created: 13 Oct 2025
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

    ll n;
    cin >> n;
    vl v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll mn = INT_MAX;
    for (int i = 0; i < (1 << n); i++) {
        ll sumA = 0, sumB = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j))
                sumA += v[j];
            else
                sumB += v[j];
        }
		ll val = abs(sumA - sumB);
        mn = min(mn, val);
    }
    cout << mn << nl;

    return 0;
}