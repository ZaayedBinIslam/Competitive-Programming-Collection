// Created on 01-Dec-24
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


void reduceFraction(int numerator, int denominator) {

    if (numerator == 0) {
       cout << "0/1\n";
        return;
    }
    int gcdd = gcd(numerator, denominator);
    numerator /= gcdd;
    denominator /= gcdd;

    cout << numerator << "/" << denominator << "\n";
}

int main() {
    faster;
    REDIRECT_IO;
    vi v(2);
    cin >> v[0] >> v[1];
    sort(v.begin(), v.end());
    int chances = 6 - v[1] + 1;
//    if (chances == 0) cout << "0/1" << nl;
//    else if (chances == 6) cout << "1/1" << nl;
//    else {
//        if (6 % chances == 0) cout << "1/" << 6 / chances << nl;
//        else cout << chances << "/6" << nl;
//    }
    reduceFraction(chances,6);
    return 0;
}