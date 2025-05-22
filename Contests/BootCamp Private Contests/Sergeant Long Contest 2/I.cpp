// Created on 07-Mar-24
//done ac
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int n;
    cin >> n;
    vi v(n);

    for (auto &i: v) {
        cin >> i;
    }

    int min;
    sort(v.begin(), v.end());
    min = v.front();

    if (v.back() == min) {
        cout << "NO";
    } else {
        for (int i = 0; i < v.size(); i++) {
            if (v[i] != min) {
                cout << v[i] << endl;
                break;
            }
        }
    }


    return 0;
}