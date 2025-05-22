#include <bits/stdc++.h>

using namespace std;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl "\n"

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


int main() {
    faster;

    ll t;
    cin >> t;

    while (t--) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        ll y = d - b, x = a + y;

        if (x < c||y<0) {
            
            cout << -1 << endl;
        }
        else {
            cout << y + (x - c) << endl;
        }
    }

    return 0;
}