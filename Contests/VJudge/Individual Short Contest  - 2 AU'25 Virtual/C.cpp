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
    vi v(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    int gSum = 0;
    for (int i = 0; i < n / 2; i++) {
        gSum += v[i];
    }
    if (n % 2 == 1) {
        gSum += v[(n / 2)];
    }
    cout << sum - gSum << endl;
    return 0;
}
