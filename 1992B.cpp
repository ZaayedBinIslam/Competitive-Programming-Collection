// Created on 11-Jul-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vl v(k);
        for (ll i = 0; i < k; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
//        v.erase(v.end());
        v.pop_back();
        ll counter1 = 0, ops = 0;

        for (ll i = 0; i < k - 1; i++) {
            if (v[i] > 1) {
                ops += (2 * v[i] - 1);
            } else { counter1++; }
        }
        cout << (ops + counter1) << endl;
    }
    return 0;
}