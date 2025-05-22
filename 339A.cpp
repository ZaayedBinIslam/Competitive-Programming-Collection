// Created on 14-Jul-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '+') s.erase(s.begin() + i);

    }
    sort(s.begin(), s.end());

    for (int i = 0; i < (int) s.size(); i++) {
        cout << s[i];
        if (i != s.size() - 1) cout << '+';
    }

    return 0;
}