// Created on 29-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int digits = 0;
    if (s[a] == '-') {
        for (int i = 0; i < a + b + 1; i++) {

            if (i == a) continue;
            else if (s[i] >= '0' && s[i] <= '9') {
                digits++;
            }
//            else {
//                cout << "No";
//                break;
//            }

            if (digits == a + b) {
                cout << "Yes";
                break;
            } else if (i == a + b && digits != a + b) cout << "No";
        }
    } else cout << "No";
    return 0;
}