// Created on 17-May-24
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int maxDraw = 0;
        if ((a + b + c) % 2 != 0) cout << -1 << endl;
//        else if(a+b+c==0) cout << 0 << endl;
        else {
            if (a + b > c) {
//                int tempA=a, tempB = b, tempC = c,;
//                while (tempB != a && tempC != a) {
//                    tempB--;
//                    tempC--;
//                    maxDraw++;
//                }
//                while(tempC!=c ){
//
//                }
                maxDraw += a;
                maxDraw += c % a;
                maxDraw += c % b;
                cout << maxDraw << endl;
            } else if (a + b == c) {
                cout << c << endl;
            } else if (a + b < c) {
                maxDraw = a + b;
                cout << maxDraw << endl;
            }
        }

    }
    return 0;
}