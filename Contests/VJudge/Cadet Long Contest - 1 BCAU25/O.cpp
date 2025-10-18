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
        string s;
        cin >> s;
        int x = 0, y = 0;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'U') y++;
            else if (s[i] == 'D') y--;
            else if (s[i] == 'R') x++;
            else if (s[i] == 'L') x--;

            if (x == 1 && y == 1) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }
    return 0;
}
