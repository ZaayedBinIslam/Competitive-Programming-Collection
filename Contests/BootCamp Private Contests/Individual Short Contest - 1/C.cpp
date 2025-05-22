// Created on 09-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 1; i <= n; i++) {
        auto it = find(v.begin(), v.end(), i);
        cout << it - v.begin()+1 << " ";
    }
    cout << endl;
    return 0;
}