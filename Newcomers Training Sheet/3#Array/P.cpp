// Created on 30-Jun-24
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
    bool isOdd = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 != 0)isOdd = true;
    }
    if (isOdd) cout << "0";
    else {
        bool oddFound = false;
        int ops = 0;
        while (!oddFound) {
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 0) a[i] /= 2;
                else oddFound = true;
            }
            if (!oddFound)ops++;
        }
        cout<<ops;
    }

    return 0;
}