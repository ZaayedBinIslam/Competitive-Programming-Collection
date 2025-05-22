// Created on 18-Feb-24
//ac done

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'U') y++;
            else if (s[i] == 'D') y--;
            else if (s[i] == 'R') x++;
            else if (s[i] == 'L') x--;

            if (x == 1 && y == 1) {
                cout << "YES" << endl;
                break;
            }
            if (i == n - 1)
                cout << "NO" << endl;

        }
    }
    return 0;
}
