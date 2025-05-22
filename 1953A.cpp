// Created on 09-May-24
//just testing what it does
#include <iostream>
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main() {
    faster;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long double lld;
        cin >> lld;
    }
    cout << "{h:";
    for (int i = 1; i <= n; i++) {

        cout << i;
        if (i != n) cout << ",";
    }
    cout << "}";
    return 0;
}