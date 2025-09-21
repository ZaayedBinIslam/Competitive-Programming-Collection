// Created on 09-Sep-25
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
        ll xi, n;
        cin >> xi >> n;

        //if the first jump is positive, then it is sequence like 1 - 2 - 3 + 4 + 5
        //every 4 numbers add to 0

        ll start = (n / 4) * 4; // nearest multiple of 4

        for (ll i = start + 1; i <= n; i++) {
            if (xi % 2 != 0) {
                xi += i;
            } else xi -= i;
        }
        cout << xi << endl;
    }
    return 0;
}
