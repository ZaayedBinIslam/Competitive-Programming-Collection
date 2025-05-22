// Created on 18-Feb-24
//
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int n;
    cin >> n;
    int evens = 0, odds = 0;
    int lastEvenAT = 0, lastOddAt = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (a % 2 == 0) {
            evens++;
            lastEvenAT = i;
        } else {
            odds++;
            lastOddAt = i;
        }
        if (evens >= 2 && odds == 1) {
            cout << lastOddAt;
            break;
        } else if (odds >= 2 && evens == 1) {
            cout << lastEvenAT;
            break;
        }

    }


    return 0;
}