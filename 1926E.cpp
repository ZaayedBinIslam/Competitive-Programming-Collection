// Created on 19-Feb-24
//not finished. need to put all if else condition into a loop where it iterats easily, non messy code

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll int n, k;
        cin >> n >> k;
        if (k <= ceil((n / (long double) 2))) {

            cout << 2 * (k - 1) + 1 << endl;

        } else if ((k > ceil((n / (long double) 2)))
                   && (k <= ceil((n / (long double) 4))
                            + ceil((n / (long double) 2)))) {

            cout << 4 * ((k - ceil((n / (long double) 2))) - 1) + 2 << endl;

        } else if ((k > ceil((n / (long double) 4))
                        + ceil((n / (long double) 2)))
                   && (k <= ceil((n / (long double) 8))
                           + ceil((n / (long double) 4))
                           + ceil((n / (long double) 2)))) {
            cout <<
                 6
                 * ((k
                     - ceil((n / (long double) 4))
                     - ceil((n / (long double) 2)))
                    - 1)
                 + 3
                 << endl;
        } else {
            cout <<
                 6
                 * ((k
                     - ceil((n / (long double) 4))
                     - ceil((n / (long double) 2))
                     - ceil((n / (long double) 8)))
                    - 1)
                 + 3
                 << endl;
        }

    }
    return 0;
}