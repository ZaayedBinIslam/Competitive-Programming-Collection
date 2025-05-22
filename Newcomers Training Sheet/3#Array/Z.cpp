// Created on 30-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int binSearch(ll a[], int start, int end, ll x) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (a[mid] == x) return mid;

        if (a[mid] < x) start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main() {
    int n, q;
    cin >> n >> q;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    while (q--) {
        ll x;
        cin >> x;
        int index;
        index = binSearch(a, 0, n - 1, x);
//        cout << index << endl;
        if (index != -1)cout << "found" << endl;
        else cout << "not found" << endl;
    }
    return 0;
}