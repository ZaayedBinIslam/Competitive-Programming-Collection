// Created on 20-Feb-24
//
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<>());
    int count = 0;
    for (int i = 1; i < n; i++) {
        count += v[0] - v[i];
    }
    cout << count << endl;
    return 0;
}