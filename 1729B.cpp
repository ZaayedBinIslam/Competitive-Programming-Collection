// Created on 01-Nov-24
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
        cin >> n;
        string s;
        cin >> s;
        vector<char> vc;
        for (auto i = n - 1; i >= 0;) {
            if (s[i] == '0') {
                if (s[i - 1] == '0') {
                    vc.push_back(char(96 + (int(s[i - 2]) - 48) * 10));
                } else {
                    vc.push_back(char(96 + (int(s[i - 2]) - 48) * 10 + (int(s[i - 1]) - 48)));
                }
                i -= 3;
            } else {
                vc.push_back(char(96 + int(s[i]) - 48));//
                i--;
            }
        }
        reverse(vc.begin(), vc.end());
        for (auto i = vc.begin(); i != vc.end(); i++) {
            cout << *i;
        }
        cout << endl;
    }
    return 0;
}