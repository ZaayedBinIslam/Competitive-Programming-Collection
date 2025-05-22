//ac
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int counter[n] = {0};
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            counter[a - 1]++;

        }
        bool found = false;
        for (int j = 0; j < (sizeof(counter) / sizeof(int)); j++) {
            if (counter[j] >= 3) {
                cout << j + 1 << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << -1 << endl;
    }
    return 0;
}

