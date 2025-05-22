// Created on 30-Nov-24
// hoilo na ken janina
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
        ll n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        string weak(m, '0');
        int weakCnt = 0;
        auto find = s.find(weak);
        vl v;
        while (true) {
            if (find != string::npos) {
                weakCnt++;
                v.push_back(find);
                find = s.find(weak, find + m);
            } else break;
        }
//        cout << "cnt: " << weakCnt << nl;
//        for (auto &it: v) cout << it << nl;
//        cout << nl;
        ll timarCount = 0;
        ll timarSpanIndex = -1;
        if (weakCnt == 0) cout << "0" << nl;
        else {
            for (ll i = 0; i < (ll) v.size(); i++) {
                if (m != 1 && v[i + 1] - v[i] == m) {
                    if (v[i] >= timarSpanIndex) {
                        timarCount++;
                        timarSpanIndex = v[i] - m - 1 + k - 1;
                    }
                } else if (m == 1) {
                    if (v[i] >= timarSpanIndex) {
                        timarCount++;
                        timarSpanIndex = v[i] - m - 1 + k - 1;
                    }
                }

            }
            cout << timarCount << nl;
        }


    }
    return 0;
}