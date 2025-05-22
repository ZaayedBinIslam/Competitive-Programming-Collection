// Created on 02-Dec-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#ifndef ONLINE_JUDGE
#define REDIRECT_IO \
    freopen("input.txt", "r", stdin);   \
    freopen("output.txt", "w", stdout); \
    freopen("error.txt", "w", stderr);
#else
#define REDIRECT_IO
#endif


#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'


int main() {
    faster;
    REDIRECT_IO;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }
        //brute
//        int al = 0, bob = 0;
//        for (int i = 0; i < n; i++) {
//            if (n % 2 == 0) {
//                bool flag = false;
//                int target = 1;//1of a kind then ++;
//                while (!flag) {
//                    for (auto &m: mp) {
//                        if (m.second == target) {
//                            m.second--;
//                            al += 1;
//                            flag = true;
//                        }
//                    }
//                    target++;
//                }
//            }
//        }
        map<int, int> mp2;
        for (auto &m: mp) {
            mp2[m.second]++;
        }
        int al = 0;
        int aliceTurns = ceil(n / 2.0);
        if (mp2[1] <= n) {
            al += (2 * ceil(mp2[1] / 2.0));
            aliceTurns -= ceil(mp2[1] / 2.0);
        }
        for (auto &m: mp2) {
            if (m.second > 1) al += ceil(mp2[1] / 2.0);
        }

        cout << al << nl;
    }
    return 0;
}