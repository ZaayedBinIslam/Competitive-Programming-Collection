// Created on 30-Jun-24
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
        string s;
        cin >> s;
        int sz = (int) s.length();
        if (sz > 10) {
            cout << s[0] << sz - 2 << s[sz - 1] << endl;
        } else cout << s << endl;
    }
    return 0;
}