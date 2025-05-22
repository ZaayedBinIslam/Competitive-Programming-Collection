// Created on 29-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vi v;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                int result = (a[i - 1] + a[j - 1] + j - i);
                v.push_back(result);
            }
        }
        auto it = min_element(v.begin(), v.end());
        cout << *it << endl;
    }
    return 0;
}