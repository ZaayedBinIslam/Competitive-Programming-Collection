#include <bits/stdc++.h>
 
using namespace std;
 
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl "\n"
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
 
int main() {
    faster;

    int l, r;
    cin >> l >> r;
    int cur = 1, prev1 = 0, prev2 = 0;
    for (int i = 0; i < r; i++) {
      cur += prev;
      prev = cur;
      cout << cur << nl;
    }

    return 0;
}