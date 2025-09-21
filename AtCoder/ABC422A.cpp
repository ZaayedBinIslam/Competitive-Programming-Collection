// Created on 10-Sep-25
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
    int i, j;
    char dash;
    cin >> i >> dash >> j;

    if (i < 8) {
        if (j < 8)
            cout << i << dash << j + 1 << endl;
        else
            cout << i + 1 << dash << 1 << endl;
    } else {
        if (j < 8)
            cout << i << dash << j + 1 << endl;
        else
            cout << i << dash << j << endl;
    }
    return 0;
}
