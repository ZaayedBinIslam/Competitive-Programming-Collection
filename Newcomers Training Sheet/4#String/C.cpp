// Created on 04-May-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    string x, y;
    cin >> x >> y;

    if (x == y) cout << x << endl;
    else if (x > y) cout << y << endl;
    else cout << x << endl;

    return 0;
}