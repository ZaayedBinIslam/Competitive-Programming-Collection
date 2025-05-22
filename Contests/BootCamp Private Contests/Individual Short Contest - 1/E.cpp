// Created on 09-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int n, s;
    cin >> n >> s;
    vector<pair<int, int> > v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());

    int max = 100 - v[0].second;
    int flag = 0;
    for (int i = 1; i < n; i++) {
        if (v[i].first < s) {
            if (v[i].second != 0 && (100-v[i].second) > max) {
                max = 100 - v[i].second;
            }
        } else if(v[i].first>=s) flag++;
    }
    if (flag == n-1 && v[0].first>=s) cout << -1;
    else cout << max;

    return 0;
}