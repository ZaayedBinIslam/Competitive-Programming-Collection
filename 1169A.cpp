// Created on 22-Sep-25
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
    faster;
    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;


    while (true) {
        if (a < n) a++;
        else a = 1;

        if (b > 1) b--;
        else b = n;


        if (a == b) {
            cout << "YES" << nl;
            return 0;
        }

        if (a == x || b == y) {
            cout << "NO" << nl;
            return 0;
        }
    }
}
