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
    int left = 1, right = n * n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            cout << left << " " << right << " ";
            left++;
            right--;
        }
        cout << endl;
    }

    return 0;
}