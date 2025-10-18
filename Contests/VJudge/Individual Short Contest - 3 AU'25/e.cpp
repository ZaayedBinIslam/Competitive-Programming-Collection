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

    int n, q;
    cin >> n >> q;
    vi v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    vi tsum(n+1);
    tsum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        tsum[i+1]+=v[i]+tsum[i];
    }
     

    while (q--) {
      int a,b;
      cin >> a>>b;
       cout<<tsum[b]-tsum[a-1]<<nl;
 
 
    }
 
    return 0;
}