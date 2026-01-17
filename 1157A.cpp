// Created on 28-Sep-25
// done
#include <bits/stdc++.h>

using namespace std;

typedef long long   ll;
typedef vector<int> vi;
typedef vector<ll>  vl;

#define faster                                                                                     \
    ios_base::sync_with_stdio(false);                                                              \
    cin.tie(NULL)
#define getUnique(v)                                                                               \
    {                                                                                              \
        sort(v.begin(), v.end());                                                                  \
        v.erase(unique(v.begin(), v.end()), v.end());                                              \
    }
#define nl '\n'

int main() {
    faster;
    int n;
    cin >> n;

    int len   = log10(n);
    int first = (int) n / pow(10, len);

    // base logic
    // put the unique nums in a set until it reaches its first number twice
    set<int> s;
    s.insert(first);
    s.insert(n);
    n++;
    int c = 0;
    // cout<<"zfb"<<n<<nl;
    while (true) {
        if (n == first)
            c++;
        if (c > 1)
            break;
        if (n % 10 != 0) {
            s.insert(n);
            // cout << n << " ";
            n++;
        } else {
            while (n % 10 == 0) {
                n /= 10;
            }
        }
    }
    // s.insert(n);
    // cout << nl << nl;
    cout << s.size();

    return 0;
}
