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
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    int left = v[0], right = v[1];
    for (int i = 2; i < n; i++) {
        if (left < right) {
            left += v[i];
        } else right += v[i];
    }
    cout << abs(right - left) << endl;
    return 0;
}
