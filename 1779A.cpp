// Created on 02-Nov-24
//done
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
        string s;
        cin >> n >> s;
        bool flag = false;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) continue;
            else {
                flag = true;
                break;
            }
        }
        if (flag) {
            size_t find = s.find("RL");
            if (find != string::npos)
                cout << "0" << endl;
            else {
                size_t find2 = s.find("LR");
                cout << find2+1 << endl;
            }
        } else cout << "-1" << endl;
    }
    return 0;
}