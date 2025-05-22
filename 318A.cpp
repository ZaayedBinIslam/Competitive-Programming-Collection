// Created on 21-Nov-24
//done
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'

int main() {
    ll n, k;
    cin >> n >> k;
    if (n % 2 == 0) {
        if (k <= n / 2) {
            cout << (2 * (k - 1)) + 1 << nl; //for odds
        } else {
            cout << (2 * ((k - 1) - (n / 2))) + 2 << nl; //for evens. note that its integer division output
        }
    } else if (n % 2 != 0) {
        if (k <= (n / 2) + 1) {
            cout << (2 * (k - 1)) + 1 << nl;
        } else {
            cout << (2 * ((k - 1) - (n / 2) - 1)) + 2 << nl;
        }
    }
    return 0;
}