// Created on 15-Mar-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int n, b;
    cin >> n >> b;
    vi v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v1[i] = x;
        if (x % 2 == 0) {
            v2[i] = 0;
        } else v2[i] = 1;
    }
    int even=0,odd=0, cost=0;
    for (int i = 0; i < n; i+=2) {
        if((v2[i]!=v2[i+1])){

        }
    }

    return 0;
}