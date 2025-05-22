// Created on 09-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int a, b, c;
    cin >> a>> b>> c;

    if (pow(a, 2) + pow(b, 2) < pow(c, 2)) {
        cout << "Yes" << endl;
    } else cout << "No" << endl;

    return 0;
}