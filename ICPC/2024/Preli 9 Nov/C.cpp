// Created on 09-Nov-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define nl '\n'
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        vector<pair<ll, ll>> xy;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> xy[i].first >> xy[i].second ;
        }
        cout << xy[0].first << xy[0].second << nl;
    }
    return 0;
}