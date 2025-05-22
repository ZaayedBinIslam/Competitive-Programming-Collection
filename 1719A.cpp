// Created on 31-Oct-24
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
        ll n, m;
        cin >> n >> m;
        if (n % 2 == 0) {
            if (m % 2 == 0) {
                cout << "Tonya" << endl;
            } else {
                cout << "Burenka" << endl;
            }
        } else {
            if (m % 2 == 0) {
                cout << "Burenka" << endl;
            } else {
                cout << "Tonya" << endl;
            }
        }
    }
    return 0;
}