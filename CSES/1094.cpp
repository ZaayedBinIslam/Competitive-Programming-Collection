#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long int counter = 0;
    for (int i = 0; i < n - 1; i++) {
        // if(arr[i + 1] == '\0')
        //    break;
        if (arr[i + 1] < arr[i]) {
            int temp = arr[i] - arr[i + 1];
            arr[i + 1] += temp;
            counter += temp;
        }
    }
    cout << counter;

    return 0;
}
