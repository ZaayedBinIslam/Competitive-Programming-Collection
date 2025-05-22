#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        char f = 'a', m = 'a', l = 'a';
        int counter = n;
        for(int i = 3; i < n; i++) {
            if(n <= 28) {
                l++;

            }
            else if(n > 28 && n <= 54) {
                m++;
            }
            else if(n > 54) {
                f++;
            }
        }
        cout << f << m << l << endl;
    }
    return 0;
}
