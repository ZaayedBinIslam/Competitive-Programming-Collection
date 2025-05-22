// Created on 29-Jun-24
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
    auto it= min_element(v.begin(),v.end());
    auto it2 = max_element(v.begin(),v.end());
    swap(*it,*it2);
    for (int i = 0; i < n; i++) {
        cout<< v[i]<<" ";
    }

    return 0;
}