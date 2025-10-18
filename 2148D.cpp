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
        ll n;
        cin >> n;
        deque<ll> d;

        ll odds    = 0;
        ll evenSum = 0;

        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (x & 1) {
                odds++;
                d.push_back(x);
            } else
                evenSum += x;
        }

        if (odds == 0)
            cout << 0 << nl;
        else {
            sort(d.begin(), d.end());
            ll x = d.back();
            evenSum += x; // first turn on and ++;
            d.pop_back(); // first ON bfr the evens
            odds--;

            if (1 & odds)
                evenSum -= (d[(odds / 2)]);
            for (ll i = odds / 2; i < odds; i++) {
                evenSum += d[i];
            }

            cout << evenSum << nl;
        }
    }

    return 0;
}