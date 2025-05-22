// Created on 07-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int n;
    while (cin >> n && n != 0) {
        vi v(n);
        for (auto &x: v) {
            cin >> x;
        }
        sort(v.begin(), v.end());
        int cost = v[0] + v[1];
        int sum = v[0] + v[1];
        for (int i = 2; i < n; i++) {
            int currCost = sum + v[i];
            sum += v[i];
            cost += currCost;
        }
        cout << cost << endl;
    }
    return 0;
}