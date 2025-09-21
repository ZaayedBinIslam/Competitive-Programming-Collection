// Created on 02-Sep-25
//
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 6, 31, 43, 5, 3, 6, 9, 11, 23};


    int max = *max_element(v.begin(), v.end()); //max element returns iter
    cout << max << endl;

    //since it returns iterator, minus v.begin gives the index number
    int maxIndex = max_element(v.begin(), v.end()) - v.begin();
    cout << maxIndex << endl;

    int min = *min_element(v.begin(), v.end());
    cout << min << endl;

    int minIndex = min_element(v.begin(), v.end()) - v.begin();
    cout << minIndex << endl;

    return 0;
}
