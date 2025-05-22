#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main() {
    faster;
    int n;
    string s;
    cin >> n >> s;
    int countN = 0, countZ = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'z') countZ++;

        if (s[i] == 'n') countN++;
    }

    for (int i = 0; i < countN; ++i) {
        cout << "1 ";
    }

    for (int i = 0; i < countZ; ++i) {
        cout << "0";

        if (i != countZ - 1) cout << " ";
    }

    cout << endl;

    return 0;
}