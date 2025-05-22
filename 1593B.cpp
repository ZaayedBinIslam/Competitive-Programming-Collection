// Created on 09-Mar-24
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
        ll n;
        cin >> n;
        ll steps = 0;
        while (true) {
            if (n % 25 == 0 || log10(n) + 1 < 2) {
                cout << steps << endl;
                break;
            }

            if (n % 10 != 0 && n % 10 != 5) {
                n = n / 10;
                steps++;
                continue;
            } else if (n % 10 != 5) {
                n = n / 10;
                steps++;
                continue;
            } else if (n % 10 == 0) {
                if (n % 100 != 0) {
                    string s = to_string(n);
                    s.erase(s.end() - 2, s.end() - 1);
                    n = stoi(s);
                    steps++;
                }
                continue;
            } else if (n % 10 == 5) {

                if (n % 100 != 25 && n % 100 != 5) {
                    string s = to_string(n);
                    s.erase(s.end() - 2, s.end() - 1);
                    n = stoi(s);
                    steps++;
                    continue;
                }
                else if (n % 100 != 75 && n % 100 != 5) {
                    string s = to_string(n);
                    s.erase(s.end() - 2, s.end() - 1);
                    n = stoi(s);
                    steps++;
                    continue;
                } else if (n % 100 == 5) {
                    n = n / 10;
                    steps++;
                    continue;
                }

            }
        }
    }
    return 0;
}