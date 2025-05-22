// Created on 20-Nov-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'

int main() {
    ll n;
    cin >> n;
    if (n % 2 == 0) cout << n / 2 << nl;
    else cout << (n + 1) / -2 << nl;
    return 0;
}