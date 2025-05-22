// Created on 09-Mar-24
//done ac
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    ll jack, jill;
    while (true) {
        cin >> jack >> jill;
        if (jack == 0 && jill == 0) break;
        map<ll, ll> mp;
        for (ll i = 0; i < jack + jill; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }
        ll count = 0;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second == 2) count++;
        }
        cout << count << endl;
    }

    return 0;
}