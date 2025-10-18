// Created on 06-Oct-25
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
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int x, a, b;
    cin >> x >> a >> b;
    v.erase(v.begin() + (x - 1));
    v.erase(v.begin() + a, v.begin() + b);
    cout << v.size() << nl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << nl;
    return 0;
}
