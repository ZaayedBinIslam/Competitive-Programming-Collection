// Created on 04-Oct-25
//done
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
    vi v(n), b;
    map<int, pair<int, int> > m;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        m[v[i]].first++;
        if (m[v[i]].first == 1) b.push_back(-1);
        else b.push_back(m[v[i]].second);
        m[v[i]].second = i + 1;
    }
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}
