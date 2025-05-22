// Created on 30-Oct-24
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
        vi v(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        if (sum == 0) cout << "0" << endl;
        else {
            int operations = 0;
            sort(v.begin(), v.end());
            if (n == 1) {
                while (v[0] % 2 != 0) {
                    v[0] = floor(v[0] / 2);
                    operations++;
                }
            } else {
                for (int i = 0; i < n; i++) {
                    if (v[i] >= 2) {
                        while (v[i] % 2 != 1) {
                            v[i] = floor(v[i] / 2);
                            operations++;
                        }
                        break;
                    } else {
                        cout << "1" << endl;
                        break;
                    }
                }
            }
            cout << operations << endl;
        }

    }
    return 0;
}