// Created on 12-Jul-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    ll n, m, a, b, c;
    cin >> n >> m >> a;

    b = n / a;
    c = m / a;

    if (n % a != 0) b++;
    if (m % a != 0) c++;

    cout << b * c << endl;
    return 0;
}