// Created on 21-Sep-25
//done
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
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        bool flag = false;

        if (n % 2 != 0) {
            flag = true;
        } else {
            while (n != 2) {
                if (n % 2 != 0) {
                    flag = true;
                    break;
                }
                n /= 2;
            }
            // for (int i = 2; i <= sqrt(n); i++) {
            //     if (n % i == 0) {
            //         if (i % 2 != 0 || (n / i) % 2 != 0) {
            //             flag = true;
            //             break;
            //         }
            //     }
            // }
        }

        if (flag) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }

    return 0;
}
