// Created on 05-Nov-24
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
        int n, k;
        cin >> n >> k;
        if (n < k) {
            cout << k - n << endl;
        } else if ((n % 2 == 0 && k % 2 == 0) || (n % 2 != 0 && k % 2 != 0)) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }

    }
    return 0;
}