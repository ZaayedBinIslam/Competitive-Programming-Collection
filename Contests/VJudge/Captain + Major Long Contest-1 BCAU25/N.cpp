// Created on 04-Oct-25
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
    set<int> s;
    while (t--) {
        int x, y;
        cin >> y >> x;
        if (y == 1) {
            s.insert(x);
        } else if (y == 2) {
            s.erase(x);
        } else if (y == 3) {
            auto it = s.find(x);
            if (it != s.end()) {
                cout << "Yes" << endl;
            } else cout << "No" << endl;
        }
    }
    return 0;
}
