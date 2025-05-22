#include <bits/stdc++.h>
//aro kaj baki
int main() {
    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];

    for(int i = 0; 0 < 3; i++) {
        if(v[i] == 0) {
            v.remove(v.begin() + i);
            break;
        }
    }
    cout << *min_element(v.begin(), v.end()) << endl;;


    return 0;
}
