// Created on 31-Aug-25
//13mins done
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
    int n, m;
    cin >> n >> m;
    vi v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    // for (int i=0; i<m; i++) {
    //     cout << v[i] << " ";
    // }
    int lower = 0, upper = n - 1;
    int lowest = 2147483647; // int max
    while (upper < m) {
        if (v[upper] - v[lower] < lowest) lowest = v[upper] - v[lower];
        lower++;
        upper++;
    }
    cout << lowest << endl;

    return 0;
}
