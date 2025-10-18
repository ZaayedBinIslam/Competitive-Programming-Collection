// Created on 05-Oct-25
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int sum = 0;
        vi ans;
        for (int i = 0; i < n;) {
            if (v[i] > 0 && v[i + 1] > 0) {
                if (v[i] > v[i + 1]) {
                    v[i + 1] = 0;
                    i+=2;
                } else {
                    v[i] = 0;
                    i++;
                }
                continue;
            } else if (v[i] < 0 && v[i + 1] < 0) {
                if (v[i] > v[i + 1]) {
                    v[i + 1] = 0;
                    i+=2;
                } else {
                    v[i] = 0;
                    i++;
                }
                continue;
            }
            i++;
        }
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
            sum += v[i];
        }
        cout << nl;
        cout << sum << nl;
    }
    return 0;
}
