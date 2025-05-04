#include <iostream>
using namespace std;


// Compile-time (Fixed-Size) Array

int main () {
    int arr[3]; // Fixed-Size: 3 Elements


    for (int i = 0; i < 3; i++) {
        cout << "Enter value: " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Values: ";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

}