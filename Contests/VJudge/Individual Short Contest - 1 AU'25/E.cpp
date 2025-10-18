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
    int n;
    cin >> n;
    vi notes = {500, 100, 50, 10, 5, 1};
    int i = 0;
    vi v;
    while (n>0) {
        if (n >= notes[i]) {
            n -= notes[i];
            v.push_back(notes[i]);
        } else i++;
    }
    sort(v.begin(), v.end());
    for (int j = 0; j < v.size(); j++) {
        cout << v[j] << " ";
    }
    cout << endl;
    return 0;
}
