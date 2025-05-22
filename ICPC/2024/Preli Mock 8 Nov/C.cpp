// Created on 08-Nov-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

int main() {
    faster;
    int t;
    cin >> t;
    vi v(3);
    int cases = 0;
    while (t--) {
        cases++;
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end(), greater<>());
        cout << "Case " << cases << ": ";
        if (v[0] == 6) {
            if ((v[1] == 3 && v[2] == 0)) cout << "perfectus" << endl;
            else if ((v[1] == 1 && v[2] == 1)) cout << "perfectus" << endl;
            else cout << "invalidum" << endl;
        } else if (v[0] == 2) {
            if (v[1] == 2 && v[2] == 2) cout << "perfectus" << endl;
            else cout << "invalidum" << endl;
        } else if (v[0] == 4) {
            if (v[1] == 2 && v[2] == 1) cout << "perfectus" << endl;
            else cout << "invalidum" << endl;
        } else if (v[0] == 3) {
            if (v[1] == 3 && v[2] == 3) cout << "perfectus" << endl;
            else cout << "invalidum" << endl;
        }
    }
    return 0;
}