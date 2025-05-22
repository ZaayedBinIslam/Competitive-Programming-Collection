// Created on 03-Dec-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#ifndef ONLINE_JUDGE
#define REDIRECT_IO \
    freopen("input.txt", "r", stdin);   \
    freopen("output.txt", "w", stdout); \
    freopen("error.txt", "w", stderr);
#else
#define REDIRECT_IO
#endif


#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
#define getUnique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define nl '\n'


int main() {
    faster;
    REDIRECT_IO;
    int t;
    cin >> t;
    char c;
    int n;
    int persons = 0, freeSeats = 0;
    while (t--) {
        cin >> c;
        cin >> n;
        if (c == 'P') {
            persons += n;
        }
        freeSeats = 0;
        if (c == 'B') {
            freeSeats += n;
//            cout << "persons " << persons << nl;
//            cout << "free " << freeSeats << nl;

            if (freeSeats > persons) {
                persons = 0;
                cout << "YES" << nl;
            } else if (freeSeats <= persons) {
                persons -= freeSeats;
                cout << "NO" << nl;
            }
        }

    }
    return 0;
}