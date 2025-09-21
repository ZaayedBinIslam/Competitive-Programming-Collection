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
        string s;
        cin >> s;
        int sz = s.size();
        map<string, int> freq;

        string temp1, temp2;
        bool f = false;
        for (int i = 0; i < sz - 1; i++) {
            temp1 = s.substr(i, 2);

            // for excluding 0 index
            if (i) {
                temp2 = s.substr(i - 1, 2);
            }

            if (temp1 == temp2 && f == false) { //edge case hhh,hhhh
                f = true;
            } else {
                freq[temp1]++;
                f = false;
            }
        }
        bool foundOne = false;
        for (auto u: freq) {
            if (u.second > 1) {
                foundOne = true;
                break;
            }
        }
        if (foundOne) cout << "Yes" << nl;
        else cout << "No" << nl;
    }
    return 0;
}
