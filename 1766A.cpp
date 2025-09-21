// Created on 12-Sep-25
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int res = 0;

        int mul = 1;
        bool br = true;
        while (true) {
            if (!br) break;
            for (int j = 1; j <= 9; j++) {
                if (j * mul > n) {
                    br = false;
                    break;
                }
                res++;
            }
            mul *= 10;
        }
        cout << res << nl;
    }
    return 0;
}
