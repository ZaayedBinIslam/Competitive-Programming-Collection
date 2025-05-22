// Created on 25-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    vi v1(3), v2(3);
    for (int i = 0; i < 3; i++) {
        cin >> v1[i];
    }
    v2 = v1;
    sort(v1.begin(), v1.end());

    for (int i = 0; i < 3; i++) {
        cout << v1[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << v2[i] << endl;
    }

    return 0;
}