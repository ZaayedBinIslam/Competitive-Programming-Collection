// Created on 11-May-24
//
#include <bits/stdc++.h>

using namespace std;
#define sp " "

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

void rec(int n) {
    if (n == 1) cout << 1 << sp;
    else {
        rec(n - 1);
        cout << n << sp;
    }
}

int main() {
    long double n;
    cin >> n;
    ll t=n;
    cout<<n<<" "<<t<<sp<<n-t<<endl;

    long double n2=n,mantissa;
    int exponent;
    mantissa= frexp(n2,&exponent);
    cout<<mantissa<<endl;
    cout<<exponent<<endl;
    return 0;
}