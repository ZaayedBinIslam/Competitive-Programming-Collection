// Created on 09-Nov-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

#define nl '\n'
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)

int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        float x, y, z;
        cin >> x >> y >> z;
        float s = (x + y + z) / 2.0;
        float area = sqrt(s * (s - x) * (s - y) * (s - z));
        float inradius = area / s;
//        cout << inradius * inradius << nl;

        float in2 = inradius * inradius;
        int i = 1;
//        cout<<(in2-int(in2)<<nl;

        while ((in2 - floor (in2)) > 0) {
            in2 *= 10;
            i *= 10;
        }
        in2 /= 10;
        i /= 10;
        int gcdd = gcd((int) in2, i);
        cout << (int) in2 / gcdd << '/' << i / gcdd << nl;

//        double whole = floor(in2);
//        double frac = in2 - whole;
//        ll pr = 1000000000;
//        ll gcdd = gcd((int) round(frac * pr), pr);
//        ll numer = round(frac * pr) / gcdd;
//        ll denom = pr / gcdd;
//        cout << (whole * denom) + numer << '/' << denom << nl;
    }
    return 0;
}

