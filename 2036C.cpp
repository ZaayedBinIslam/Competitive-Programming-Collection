// Created on 02-Nov-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int q;
        cin >> q;
        int x;
        char v;
        if (s.length() < 4) {
            for (int i = 0; i < q; i++) {
                cin >> x >> v;
                cout << "NO" << endl;
            }
        } else {
            size_t find1st = s.find("1100");
            for (int i = 0; i < q; i++) {
                cin >> x >> v;
                s[x - 1] = v;
                if (x - 1 >= find1st && x - 1 < find1st + 4) {
                    size_t find = s.find("1100", find1st);
                    if (find != string::npos)
                        cout << "YES" << endl;
                    else cout << "NO" << endl;
                } else {
                    size_t find = s.find("1100");
                    if (find != string::npos)
                        cout << "YES" << endl;
                    else cout << "NO" << endl;
                }

            }
        }

    }
    return 0;
}