// Created on 21-Sep-24
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
        ll k;// why the heck my comma btn nt working:(
        cin >> n >> k;
        ll leaves = 0;

        leaves = ((n * (n + 1)) / 2) - ((n - k) * (n - k + 1)) / 2;

        if (leaves % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}