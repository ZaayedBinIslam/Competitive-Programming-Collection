// Created on 29-Jun-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

bool isPrime(int n) {
    for (int i = 2; i <= (int) sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if(isPrime(i)) cout<<i<<" ";
    }
    return 0;
}