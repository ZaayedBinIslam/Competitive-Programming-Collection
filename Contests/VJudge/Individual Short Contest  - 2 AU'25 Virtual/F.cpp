// Created on 04-Oct-25
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
        vector<int> v(10, 0);

        for (int i = 1; i <= n; i++) {
            string s = to_string(i);
            for (auto c: s) v[c - '0']++;
        }

        cout << v[0];
        for (int i = 1; i < 10; i++) {
            cout << " " << v[i];
        }
        cout << endl;
    }
    return 0;
}
