// Created on 07-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
    int n;
    while (cin >> n && n != 0) {
        vi v(n);
        for (auto &x: v) {
            cin >> x;
        }
        int cost = 0;
        //basically this will add the first 2 elements in a vector each time and input that sum into the vector
        // . then sort the vector again to add the 2 smallest number.this ensures always the smallest nums are added.
        // so the cost will remain minimum. although in the program for some reason outputs 2 values if only 1line
        // of input is given . dunno why.

        for (int i = 0; i < n - 1; i++) {
            sort(v.begin() + i, v.end());
            v[i + 1] = v[i + 1] + v[i];
            cost = cost + v[i + 1];

        }
        cout << cost << endl;
    }
    return 0;
}