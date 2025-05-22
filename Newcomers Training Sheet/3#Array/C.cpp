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
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0) a[i] = 2;
        else if (a[i] > 0) a[i] = 1;
    }
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}