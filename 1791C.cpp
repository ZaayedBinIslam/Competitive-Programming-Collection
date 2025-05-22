// Created on 16-Feb-24
//ac done

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int i = 0;
        int j = n - 1;

        while (s[i] != s[j] && i < j) {
            i++;
            j--;
        }


        cout << j - i + 1 << endl;
    }
    return 0;
}