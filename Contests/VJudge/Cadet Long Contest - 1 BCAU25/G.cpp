// Created on 05-Oct-25
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'

int main() {
    faster;
    int n, m, c;
    cin >> n >> m >> c;
    vi b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int cnt = 0;
    vector<int> a(m);
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            cin >> a[j];
            sum += a[j] * b[j];
        }
        if (sum + c > 0) cnt++;
    }
    cout << cnt << nl;
    return 0;
}
