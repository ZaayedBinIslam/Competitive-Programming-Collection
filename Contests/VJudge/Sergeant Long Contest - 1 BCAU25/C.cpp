// Created on 06-Oct-25
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
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int minDist = INT_MAX;
    auto minpos = min_element(v.begin(), v.end());

    while (true) {
        auto minposNext = find(minpos + 1, v.end(), *minpos);

        if (minposNext == v.end()) break;

        int dis = distance(minpos, minposNext);
        minpos = minposNext;
        minDist = min(minDist, dis);
        // cout << minDist << nl;
    }
    cout << minDist << nl;
    return 0;
}
