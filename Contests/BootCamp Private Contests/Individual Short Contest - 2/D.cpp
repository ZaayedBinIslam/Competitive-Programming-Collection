// Created on 14-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    ll x, y;
    cin >> x >> y;
    if (x > 0 && y > 0) {
        cout << 0 << " " << x + y << " " << x + y << " " << 0 << endl;
    } else if (x < 0 && y > 0) {
        cout << -(abs(x) + y) << " " << 0 << " " << 0 << " " << abs(x) + y << endl;
    } else if (x > 0 && y < 0) {
        cout << 0 << " " << -(x + abs(y)) << " " << (x + abs(y)) << " " << 0 << endl;
    } else {
        cout << 0 << " " << -(abs(x) + abs(y)) << " " << -(abs(x) + abs(y)) << " " << 0 << endl;
    }

    return 0;
}