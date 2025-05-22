// Created on 07-Mar-24
//done ac
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int n, x, a, b;
    cin >> n;
    vi v(n);
    for (auto &i: v) {
        cin >> i;
    }
    cin >> x >> a >> b;

    v.erase(v.begin() + x - 1);
    v.erase(v.begin() + a - 1, v.begin() + b - 1);

    cout << v.size() << endl;
    for (auto &i: v) {
        cout << i << " ";
    }

    return 0;
}