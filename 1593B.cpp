// Created on 09-Mar-24
//done on oct18,25
#include <bits/stdc++.h>

using namespace std;

typedef long long   ll;
typedef vector<int> vi;
typedef vector<ll>  vl;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int  cnt1 = 0, cnt2 = 0;
        bool ffound = false, zfound = false;

        for (int i = s.size() - 1; i >= 0; i--) {

            if (ffound) {
                if (((s[i] == '2') || (s[i] == '7'))) {
                    break;
                }
            }
            if (s[i] == '5' && !ffound) {
                ffound = true;
                continue;
            }
            cnt1++;
        }

        for (int i = s.size() - 1; i >= 0; i--) {
            if (zfound) {
                if (((s[i] == '0') || (s[i] == '5'))) {
                    break;
                }
            }
            if (s[i] == '0' && !zfound) {
                zfound = true;
                continue;
            }
            cnt2++;
        }

        cout << (cnt1 < cnt2 ? cnt1 : cnt2) << endl;
    }

    return 0;
}