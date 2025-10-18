// Created on 25-Sep-25
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
    faster;
    int t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;
        // ll left = (pow(x, 4) / 4)/y + y;
        // ll right = pow(x, 2);
        // ll left = pow((pow(x, 2) - (2 * y)), 2);
        if (((x * x * x * x) + 4 * (y * y)) == (4 * (x * x) * y)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
