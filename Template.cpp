#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'

const int M = 1000000;
bool      marked[M];
bool      isprime(int n) { // call sieve then check with this
    if (n == 2)
        return true;
    if (n < 2 || n % 2 == 0)
        return false;
    return marked[n] == false;
}
void sieve(ll n) {
    for (int i = 3; i * i <= n; i += 2) {
        if (marked[i] == false) // i is a prime
        {
            for (int j = i * i; j <= n; j += i) {
                marked[j] = true; // true marked are not prime
            }
        }
    }
}

int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {

    }
    return 0;
}