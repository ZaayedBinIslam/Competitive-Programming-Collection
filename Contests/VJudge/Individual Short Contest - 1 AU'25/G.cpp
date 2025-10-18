// Created on 25-Sep-25
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
    int n;
    cin >> n;
    vi v(n);
    map<int, int> freqSum;
    vector<pair<int, int> > freqSum2;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        freqSum[v[i]] += v[i];
    }
    for (auto u: freqSum) {
        freqSum2.push_back(make_pair(u.first, u.second));
    }
    int max = 0;
    // bool f = false;
    // while (true) {
    //     int flag = 0;
    //     for (int i = 0; i < freqSum2.size(); i++) {
    //         flag += freqSum2[i].second;
    //         if (i == 0) {
    //             if (freqSum2[i].second >= freqSum2[i + 1].second) {
    //                 max += freqSum2[i].second;
    //                 freqSum2[i].second = 0;
    //                 freqSum2[i + 1].second = 0;
    //             }
    //         } else if (i == freqSum2.size() - 1) {
    //             if (freqSum2[i].second >= freqSum2[i - 1].second) {
    //                 max += freqSum2[i].second;
    //                 freqSum2[i].second = 0;
    //                 freqSum2[i - 1].second = 0;
    //             }
    //         } else {
    //             if (freqSum2[i].second >= freqSum2[i + 1].second + freqSum2[i - 1].second) {
    //                 max += freqSum2[i].second;
    //                 freqSum2[i].second = 0;
    //                 freqSum2[i + 1].second = 0;
    //                 freqSum2[i - 1].second = 0;
    //             }
    //         }
    //     }
    //     if (flag == 0)break;
    // }
    while (true) {
        bool erased = false;
        for (auto u: freqSum2) {
            cout << u.first << " " << u.second << endl;
            int val = u.first;
            cout << freqSum[val + 1] << " " << freqSum[val - 1] << endl;
            if (u.second >= freqSum[val + 1] + freqSum[val - 1]) {
                max += u.second;
                cout << max << endl;
                freqSum2.
                freqSum2.erase(val + 1);
                freqSum2.erase(val - 1);
                erased = true;
            }
        }
        if (!erased) break;
    }

    cout << max << endl;

    return 0;
}
