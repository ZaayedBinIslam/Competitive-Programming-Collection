// Created on 17-Jul-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        ll n, k;
//        cin >> n >> k;
//        vl v1(n), v2(n), v3(n);
//        for (ll i = 0; i < n; i++) {
//            cin >> v1[i];
//        }
//        for (ll i = 0; i < n; i++) {
//            cin >> v2[i];
//        }
//        ll a = n;
//
//        for (ll i = 0; i < n; i++) {
//            vector<pair<ll, ll>> vpl;
//            for (ll j = 0; j < a; j++) {
//                if (abs(v1[i] - v2[j]) <= k) {
//                    vpl.push_back(make_pair(v1[i] - v2[j], j));  //vpl.emplace_back(v2[j],j);
////                    v3[i] = v2[j];
////                    v2.erase(v2.begin() + j);
//                }
//            }
//            sort(vpl.begin(), vpl.end());
//            v3[i] = v2[vpl[0].second];
////            cout<<v3[i]<<"t";
//            v2.erase(v2.begin() + vpl[0].second);
//            a--;
//        }
//        cout << v3[0];
//        for (ll i = 1; i < n; i++) {
//            cout << " " << v3[i];
//        }
//        cout << endl;
//    }
//    return 0;
//}


int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vl v2(n), v3(n);
        vector<pair<ll, ll>> v1(n);
        for (ll i = 0; i < n; i++) {
            cin >> v1[i].first;
            v1[i].second = i;
        }
        for (ll i = 0; i < n; i++) {
            cin >> v2[i];
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        for (ll i = 0; i < n; i++) {
            v3[v1[i].second]= v2[i];
        }
        for (ll i = 0; i < n; i++) {
            cout<<v3[i]<<" ";
        }
        cout << endl;

    }
    return 0;
}