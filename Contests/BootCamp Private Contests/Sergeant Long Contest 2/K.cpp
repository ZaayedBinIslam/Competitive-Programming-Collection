// Created on 08-Mar-24
//i hate !EOF conditions for input
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    map<ll, ll> mp;
    vl v;
    vl vUniqueSequential;
    ll x;

    while (cin >> x && x != EOF) {
        auto it = find(vUniqueSequential.begin(), vUniqueSequential.end(), x);
        if (it == vUniqueSequential.end()) {
            vUniqueSequential.push_back(x);
        }
        mp[x]++;
    }

    for (ll i = 0; i < (ll) vUniqueSequential.size(); i++) {
        ll y = vUniqueSequential[i];
        cout << y << " " << mp[y];
        cout << endl;
    }


    return 0;
}