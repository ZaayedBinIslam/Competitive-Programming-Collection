// Created on 10-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

ll joyMeter(ll f, ll t, ll k) {
    ll maxJ = 0;
    if (t <= k) {
        maxJ = f;
    } else maxJ = f - (t - k);

    return maxJ;

}

int main() {
    ll n, k;
    cin >> n >> k;

    vl joyF(n), time(n);

    for (int i = 0; i < n; i++) {
        cin >> joyF[i] >> time[i];
    }
    ll maxJoy = joyMeter(joyF[0], time[0], k);

    for (int i = 1; i < n; i++) {
        ll currMaxJoy = joyMeter(joyF[i], time[i], k);
        if (maxJoy < currMaxJoy)
            maxJoy = currMaxJoy;
    }

    cout << maxJoy << endl;
    return 0;
}
