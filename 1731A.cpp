// Created on 22-Feb-24
//done ac
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll int n;
        cin >> n;
        ll int arr[n];
        for (ll int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);//probably  unnecessary.
        ll int mul = 1;
        for (ll int i = 0; i < n; i++) {
            mul *= arr[i];
        }
        cout << (mul + n - 1) * 2022 << endl;
    }
    return 0;
}