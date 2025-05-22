// Created on 10-May-24
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
        string s, tempS;
        cin >> s;
        tempS = s;
        char s2 = s[0];
        int count = 0, index = -1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == s2) count++;
            else {
                index = i;
                break;
            }

        }

        if (count == s.size()) cout << "NO" << endl;
        else {
            sort(s.begin(), s.end());
            if (s != tempS) {
                cout << "YES" << endl << s << endl;
            } else {
                sort(s.rbegin(), s.rend());
                cout << "YES" << endl << s << endl;
            }
        }

    }
    return 0;
}