// Created on 09-Mar-24
//done ac
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

//(x1, y1) > (x2, y2) if and only if (x1 > x2) or (x1 == x2 and y1 < y2)

bool customComp(pair<ll, ll> cord1, pair<ll, ll> cord2) {
//    if (cord1.first > cord2.first) {
//        return false;
//    } else if (cord1.first == cord2.first && cord1.second < cord2.second)
//        return false;
//    return true;
    if (cord1.first == cord2.first) {
        return cord1.second > cord2.second; // Sort by y if x's are equal. note here y1<y2 condition is counter-intuitive
    }
    return cord1.first < cord2.first; // Otherwise, sort by x


}


int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> vp(n);
        for (int i = 0; i < n; i++) {
            ll first, second;
            scanf("%lld %lld", &first, &second);
            vp[i] = make_pair(first, second);
        }
        sort(vp.begin(), vp.end(), customComp);

        for (auto &i: vp) {
            printf("%Ld ", i.first); //lld and Ld both are right for long long types
            printf("%Ld\n", i.second);
        }

    }
    return 0;
}