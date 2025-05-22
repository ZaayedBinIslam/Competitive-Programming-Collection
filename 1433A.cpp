// Created on 15-Feb-24.
//done ac

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, digits;
        cin >> x;
        digits = int(log10(x) + 1); //this counts digits. example 345, 2<log value<3 .then +1
        int pressed = ((x % 10) - 1) * 10 + (digits * (digits + 1)) / 2; //first part gets number last digit and then -1
                                                                        //gives prev digit.means each prev digits were pressed
                                                                        // 10 times. second part counts current number pressed
        cout << pressed<<endl;

    }
    return 0;
}
