// Created on 07-Mar-24
//done ac

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int n;
    cin >> n;
    vl v(n), minIndexes;
    ll minDiff, currentMinDiff;
    for (auto &x: v) {
        cin >> x;
    }
    ll min = *min_element(v.begin(), v.end());

    for (auto i = 0; i < v.size(); i++) {
        if (v[i] == min) minIndexes.push_back(i);
    }
    minDiff = minIndexes[1] - minIndexes[0];
    for (auto i = 1; i < minIndexes.size() - 1; i++) {
        currentMinDiff = minIndexes[i + 1] - minIndexes[i];
        if (currentMinDiff < minDiff) minDiff = currentMinDiff;
    }
    cout << minDiff;

    return 0;
}