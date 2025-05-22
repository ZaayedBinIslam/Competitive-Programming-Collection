// Created on 19-Nov-24
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
    ll k, n, w;
    cin >> k >> n >> w;
    ll cost = 0;
    for (int i = 1; i <= w; i++) {
        cost += i * k;
    }
    if (cost <= n) cout << 0 << endl;
    else cout << cost - n << endl;

    return 0;
}