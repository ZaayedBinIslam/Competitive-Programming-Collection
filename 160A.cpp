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


int main() {
    faster;
    REDIRECT_IO;
    int n;
    cin >> n;
    vi v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater());
    vi prefixSum(n + 1);//1-indexed array/vector

    for (int i = 0; i < n; i++) {
        prefixSum[i + 1] = prefixSum[i] + v[i];
    }

    int cnt = 0;
    int r = n - 1, l = 0;//for right side sum
//    int r2 = n - 1, l2 = 0;
    bool flag = false;

    int coinSum = 0;
    for (int i = 0; i < n; i++) {
        coinSum += v[i];
        int rightSum = prefixSum[r] - prefixSum[l];
        if (coinSum < rightSum) {
            cnt++;
            l++;
        } else
            break;

    }
    cout << cnt << nl;

    return 0;
}