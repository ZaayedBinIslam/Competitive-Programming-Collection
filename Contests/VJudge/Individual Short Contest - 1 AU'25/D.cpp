// Created on 25-Sep-25
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
    int t;
    cin >> t;
    double avg = 0;
    double sum = 0;
    for (int i = 1; i <= t; i++) {
        int n;
        cin >> n;
        sum += n;
        avg = sum / i;
        cout << std::fixed << std::setprecision(4) << avg << endl;
    }
    return 0;
}
