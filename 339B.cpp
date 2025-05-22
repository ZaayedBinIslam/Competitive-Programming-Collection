// Created on 14-Jul-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    ll n, m;
    cin >> n >> m;
    vl v(m);
    for (ll i = 0; i < m; i++) {
        cin >> v[i];
    }
    ll currentPos = 1;
    ll tUnit = 0;
    for (ll i = 0; i < m; i++) {
        //1 to 3 3 unit time
        if (currentPos <= v[i]) {
            tUnit += (v[i] - currentPos);
            currentPos = v[i];
        } else {
            tUnit += (n - currentPos) + (v[i]);
            currentPos = v[i];
        }

    }
    cout << tUnit;
    return 0;
}