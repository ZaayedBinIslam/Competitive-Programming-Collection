// Created on 07-Mar-24
//done ac
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    ll n, x;
    cin >> n >> x;
    vl v(n);
    for (auto &i: v) {
        cin >> i;
    }
    sort(v.begin(), v.end());

    ll totalHours = v[0] * x;
    ll reducedX = x - 1;
    ll temp = 0;
    for (ll i = 1; i < n; i++) {
        if (reducedX < 1) {
            reducedX = 1;
            temp = i;
            break;
        }
        totalHours += v[i] * reducedX;
        reducedX--;
    }
    if (temp != 0) {
        for (ll i = temp; i < n; i++) {
            totalHours += v[i];
        }
    }

    cout << totalHours << endl;

    return 0;
}