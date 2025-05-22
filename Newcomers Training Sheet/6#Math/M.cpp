// Created on 01-Oct-24
//https://chatgpt.com/c/66fbd7b5-1bd8-800d-ad31-f3aa180e6595
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    string N;  // to store the large number N
    int X;     // to store the number X (since X is ≤ 10^9, it can be stored as an int)

    // Input
    cin >> N >> X;

    // Initialize remainder as 0
    ll remainder = 0;

    // Process each digit of N to calculate N % X
    for (int i = 0; i < N.size(); i++) {
        // Update the remainder with the current digit
        remainder = (remainder * 10 + (N[i] - '0')) % X;
    }

    // Output the result
    if (remainder == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;

}

/*
// Created on 01-Oct-24
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    string N;
    int X;

    cin >> N >> X;

    ll remainder = 0;

    for (int i = 0; i < N.size(); i++) {

        remainder = (remainder * 10 + (N[i] - '0')) % X;
    }

    if (remainder == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;

}
 */