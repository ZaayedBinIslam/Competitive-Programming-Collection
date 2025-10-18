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
    if (n > 0) {
        cout << (n * (n + 1)) / 2 << endl;
    } else {
        n *= -1;
        int sum = ((n * (n + 1)) / 2) - 1;
        cout << -1 * sum << endl;
    }
    return 0;
}
