/*
Q1) WAC++P to find maximum and minimum elems in an array using functions
define seperate functions named find_max & find_min that take an array of integers 
and size as parameters,and return maiximum and minimum elements respectively.
*/

#include <iostream>
using namespace std;
// Max function
int max(int arr[], int size) {
    int max_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

// Min function
int min(int arr[], int size) {
    int min_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int arr[100]; 
        if (size <= 0 || size > 100) {
        cout << "Invalid size!" << endl;
        return 1;
    }
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Maximum element: " << max(arr, size) << endl;
    cout << "Minimum element: " << min(arr, size) << endl;

    return 0;
}