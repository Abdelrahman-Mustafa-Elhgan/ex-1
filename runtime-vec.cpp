#include <iostream>
#include <vector>
using namespace std;

// Runtime in Vector

int main() {
    vector<int> v;
    int n, val;

    cout << "How many values? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> val;
        v.push_back(val);
    }

    cout << "Value: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

}