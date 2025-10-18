// Bismillahir Rahmanir Raheem
// Created: 13 Oct 2025
// Author: zbi
//

#include <bits/stdc++.h>

using namespace std;

#define faster                                                                                     \
    ios_base::sync_with_stdio(false);                                                              \
    cin.tie(NULL)
#define getUnique(v)                                                                               \
    {                                                                                              \
        sort(v.begin(), v.end());                                                                  \
        v.erase(unique(v.begin(), v.end()), v.end());                                              \
    }
#define nl "\n"

typedef long long      ll;
typedef vector<int>    vi;
typedef vector<ll>     vl;
typedef pair<int, int> pii;
typedef pair<ll, ll>   pll;

int main() {
    faster;

    // complexity is O(n*2^n) + O(n*n)? which is fine for n<=20.
    //  more than that and it will struggle

    int n = 3; // size 4, so 2^4 subsets
    vi  v = {1, 2, 3};

    vector<vi> subsets;
    // <(1<<n) cause, there are 2^n subsets, so it runs 1<<n times
    for (int i = 0; i < (1 << n); i++) {
        vi subset;

        // The loop below checks each of the bits in binary(i)
        // i & (1 << j) condition checks if i has 1 in each position
        // like i=1101 , then
        // for j=0,1,2 ; 1<<j = 0001,0010,0100 ;basically checking position of each 1;
        // & operator returns 1 or true when both numbers have 1 in same position,else returns 0
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) { // same as i & (1 << j) != 0
                // cout << i << " " << (1 << j) << nl;
                subset.push_back(v[j]);
            }
        }
        cout << nl;
        subsets.push_back(subset);
    }
    for (int i = 0; i < subsets.size(); i++) {
        cout << "[";
        for (int j = 0; j < subsets[i].size(); j++) {
            cout << subsets[i][j];
            if (j != subsets[i].size() - 1)
                cout << ", ";
        }
        cout << "]" << nl;
    }

    return 0;
}