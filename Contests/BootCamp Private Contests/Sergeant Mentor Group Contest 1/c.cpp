
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;

        int xDigits = int(log10((x) + 1)); //counts digits in x
        int counter = ((x % 10) - 1) * 10; // 777 means upto 6666 he had to press 6*10 digits. now just need to count 777 digits pressed in loop
        for(int i = 1; i <= xDigits; i++) {
            counter += i;
        }
        cout<<counter<<endl;
    }

    return 0;
}
