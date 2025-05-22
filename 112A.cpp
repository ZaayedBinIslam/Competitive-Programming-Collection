// Created on 13-Jul-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    for (auto &x: s1) {
        x = toupper(x);
    }
    for (auto &x: s2) {
        x = toupper(x);
    }

    if (s1 == s2) cout << 0;
    else if (s1 > s2)cout << 1;
    else cout << -1;

    return 0;
}