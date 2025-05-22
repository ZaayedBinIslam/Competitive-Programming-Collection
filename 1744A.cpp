// Created on 19-Oct-24
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
        int l;
        cin >> l;
        vi v(l);
        string s;
        for (int i = 0; i < l; i++) {
            cin >> v[i];
        }
        cin >> s;
//        cout<<s<<endl;

        if (l == 1) cout << "YES" << endl;
        else {
            bool flag = true;

            for (int i = 0; i < l; i++) {

                int x = v[i];
                char y = s[i];

                if (flag) {

                    for (int j = i + 1; j < l; j++) {
                        if (v[j] == x) {
                            if (s[j] == y) continue;
                            else {
                                cout << "NO" << endl;
                                flag = false;
                                break;
                            }
                        }
                    }
                }
            }
            if (flag) cout << "YES" << endl;
        }
    }
    return 0;
}