// Created on 28-Nov-24
//  done on 21 sept,25
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


int main() {
    faster;
    // REDIRECT_IO;
    int n;
    cin >> n;
    vi v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<>());
    vi prefixSum(n);

    prefixSum[0] = v[0];
    for(int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + v[i];
    }

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(prefixSum[i] > (prefixSum[n - 1] - prefixSum[i])) {
            cnt = i+1;
            break;
        }
    }
    cout << cnt << nl;

    return 0;
}
