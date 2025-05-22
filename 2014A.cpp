// Created on 21-Sep-24
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
        int k;

        cin >> n >> k;
        int a;
        int give = 0;
        int gold = 0;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a >= k) gold += a;
            else if (a ==0 && gold != 0) {
                give++;
                gold--;
            }
        }
        cout << give << endl;

    }
    return 0;
}