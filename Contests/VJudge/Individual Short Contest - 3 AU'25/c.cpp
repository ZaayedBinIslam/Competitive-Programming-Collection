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
 
    int t;
    cin >> t;
 
    while (t--) {
      int n;
      cin >> n;
      vi v = {1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8,9};
       cout << v[n-1] << nl;
    }
 
    return 0;
}