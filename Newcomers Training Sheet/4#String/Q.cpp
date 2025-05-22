// Created on 30-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    string s;

    int cnt = 0;
    while (cin >> s) {
        if (cnt > 0) { cout << " "; }
        reverse(s.begin(), s.end());
        cout << s;
        cnt++;
    }
//    cin>>s;
//    reverse(s.begin(), s.end());
//    cout << s;

    return 0;
}