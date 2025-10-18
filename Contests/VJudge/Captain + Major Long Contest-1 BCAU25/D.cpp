// Created on 05-Oct-25
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
    vi v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int sereja = 0, dima = 0;
    int l = 0, r = n - 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (v[l] > v[r]) {
                sereja += v[l];
                l++;
            } else {
                sereja += v[r];
                r--;
            }
        } else {
            if (v[l] > v[r]) {
                dima += v[l];
                l++;
            } else {
                dima += v[r];
                r--;
            }
        }
    }
    cout << sereja << " " << dima;
    return 0;
}
