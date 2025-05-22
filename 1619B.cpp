// Created on 10-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
       set<ll> s;
        for (ll i = 1; i <= (ll) sqrt(n); i++) {
            s.insert(i*i);
        }
        for (ll i = 1; i <= (ll) cbrt(n); i++) {
            s.insert(i*i*i);
        }
        cout << (ll) s.size() << endl;
    }
    return 0;
}