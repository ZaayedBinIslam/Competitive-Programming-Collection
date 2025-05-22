// Created on 28-Nov-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#ifndef ONLINE_JUDGE
#define REDIRECT_IO \
    freopen("input.txt", "r", stdin);   \
    freopen("output.txt", "w", stdout); \
    freopen("error.txt", "w", stderr);
#else
#define REDIRECT_IO
#endif


#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'

bool isPrime(ll n) {
    if (n == 1) return false;
    for (ll i = 2; i <= (ll) sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    faster;
    REDIRECT_IO;
    ll n;
    cin >> n;
    if (isPrime(n)) {
        ll sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
//            cout<<n<<nl;
        }
//        cout<<sum<<nl;
        if (isPrime(sum))
            cout << "Freedom!" << nl;
        else cout << "Bad luck!" << nl;
    } else cout << "Bad luck!" << nl;
    return 0;
}