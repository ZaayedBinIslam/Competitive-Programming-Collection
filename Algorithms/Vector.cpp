// Created on 18-Feb-24
//
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    vector<int> v(5);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << v.size() << ' ' << v.capacity() << endl;

    v.erase(v.begin());
    v.erase(v.begin());
    v.resize(3);
    v.shrink_to_fit();
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
    cout << endl;
    cout << v.size() << ' ' << v.capacity() << endl;

    return 0;
}