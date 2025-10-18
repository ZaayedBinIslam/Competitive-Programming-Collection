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


    int n;
    cin >> n;
    int sx, sy, ex, ey;
    cin >> sx >> sy >> ex >> ey; //starting x, ending x; and y
    string s;
    cin >> s;
    int time = 0;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'E') {
            if (sx < ex) sx++;
        } else if (s[i] == 'W') {
            if (sx > ex) sx--;
        } else if (s[i] == 'N') {
            if (sy < ey) sy++;
        } else if (s[i] == 'S') {
            if (sy > ey) sy--;
        }
        time++;
        if (sx == ex && sy == ey) {
            flag = true;
            break;
        }
    }
    if (flag) {
        cout << time << nl;
    } else cout << -1 << nl;

    return 0;
}
