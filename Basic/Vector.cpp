// Vector Basics in C++
// Created on 02-Sep-25

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ------------------------------
    // Basic declaration and insertion
    // ------------------------------
    vector<int> v; // empty vector (no size declared)

    v.push_back(1); // insert at end
    v.push_back(2);

    // Note: v[1] = 2 also works, but only if size is already defined.
    // If the vector is empty or too small, this will cause errors.

    cout << "Index 0: " << v[0] << endl; // read like an array
    cout << "Index 1: " << v[1] << endl;

    v[0] = 5; // update element
    cout << "Index 0 changed: " << v[0] << endl;
    cout << "Vector size: " << v.size() << endl;

    // ------------------------------
    // Initialization with values
    // ------------------------------
    vector<int> v2 = {1, 2, 3, 4, 5};
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;
    cout << "V2 size: " << v2.size() << endl;

    // ------------------------------
    // Clearing and checking emptiness
    // ------------------------------
    v2.clear();
    cout << "V2 size after clear: " << v2.size() << endl;
    cout << "Is V2 empty? " << v2.empty() << endl; // 1 = true

    // Accessing after clear is unsafe:
    // cout << v2[1] << endl; // undefined behavior!

    // ------------------------------
    // Declaring with size
    // ------------------------------
    int n = 5;
    vector<int> v3(n); // size n, default-initialized to 0
    cout << "V3 size: " << v3.size() << endl;

    // Can also input/output with loops:
    // for (int i = 0; i < n; i++) cin >> v3[i];
    // for (int i = 0; i < n; i++) cout << v3[i] << endl;

    // ------------------------------
    // Declaring with size + initial value
    // ------------------------------
    vector<int> v4(3, 5); // size 3, all elements = 5
    for (int i = 0; i < v4.size(); i++) {
        cout << v4[i] << " ";
    }
    cout << endl;

    // ------------------------------
    // Copying vectors
    // ------------------------------
    vector<int> v5 = {1, 2, 3, 4, 5};
    vector<int> tmp = v5; // full copy (original unchanged)

    for (int i = 0; i < tmp.size(); i++) cout << tmp[i] << " ";
    cout << endl;

    // ------------------------------
    // Using iterators
    // ------------------------------
    vector<int>::iterator it;

    it = v5.begin();
    cout << *it << endl; // *it gives value at iterator

    // Iterate with explicit iterator
    for (it = v5.begin(); it != v5.end(); it++) cout << *it << " ";
    cout << endl;

    // Range-based for loop (cleaner)
    for (int u : v5) cout << u << " ";
    cout << endl;

    // Using auto (type automatically deduced)
    for (auto u : v5) cout << u << " ";
    cout << endl;

    // ------------------------------
    // Erasing elements
    // ------------------------------
    cout << "V5 size: " << v5.size() << endl;
    v5.erase(v5.begin()); // erase first element
    // v5.erase(v5.begin(), v5.end()); // erase all elements
    cout << "V5 size after erase: " << v5.size() << endl;

    for (int u : v5) cout << u << " ";
    cout << endl;

    return 0;
}
