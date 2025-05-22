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
    bool isPrime = true;
    for (int i = 2; i <= (int)sqrt(n); i++) {
        if (n % i == 0) {
            isPrime=false;
            cout << "NO";
            break;
        }
    }
    if(isPrime) cout<<"YES";
    return 0;
}