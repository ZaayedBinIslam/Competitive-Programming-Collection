// Created on 29-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    ll n;
    cin >> n;
    ll arr[n];
    ll x;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
    bool found = false;
    for (ll i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = true;
            cout << i;
            break;
        }
    }
    if (!found)
        cout << "-1";
    return 0;
}