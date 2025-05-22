// Created on 21-Feb-24
//ac done
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = ((n * (n + 1)) / 2) - 1; //sum from 2 to n
        int firstValue = n - (sum % n); //algo calcs first value. then prints. rest of the values ae same as i+1
        cout << firstValue << ' ';
        for (int i = 1; i < n; i++) {
            cout << i+1 << ' ';
        }
        cout << endl;
    }
    return 0;
}