#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long int counter = 0;
    for(int i = 0; i < n - 1; i++) { //loop runs till n-1 cause in the last itr theres no arr[i+1] so no need to check
        if(arr[i + 1] < arr[i]) {
            int temp = arr[i] - arr[i + 1];;
            arr[i + 1] += temp;
            counter += temp;
        }
    }
    cout << counter;


    return 0;
}
