// Created on 16-Feb-24
//done ac
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        long long int counter = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[0]) {
                counter += arr[i] - arr[0];
            }
        }
        cout << counter << endl;
    }
    return 0;
}