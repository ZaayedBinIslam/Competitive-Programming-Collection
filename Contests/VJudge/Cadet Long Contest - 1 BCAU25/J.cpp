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
    int mat[5][5];
    pair<int, int> p;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 1) p = {i + 1, j + 1};
        }
    }
    cout << abs(3 - p.first) + abs(3 - p.second) << endl;
    return 0;
}
