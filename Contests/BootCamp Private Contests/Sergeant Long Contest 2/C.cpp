// Created on 07-Mar-24
//done ac
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int n;
    cin >> n;
    vl v(n);

    for (auto &x: v) {
        cin >> x;
    }

    sort(v.begin(), v.end());
    for (auto &x: v) {
        cout << x << " ";
    }

    return 0;
}