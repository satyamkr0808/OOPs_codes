/*
Q2) WAC++P to find sum of natural numbers using recursion.
*/

#include <iostream>
using namespace std;

int sum_natural(int n) {
    if (n <= 0) {
        return 0; // Base case
    }
    return n + sum_natural(n - 1);
}

int main() {
    int n;
    cout << "Enter a +ve integer: ";
    cin >> n;
    if (n < 0) {
        cout << "Please enter a +ve integer." << endl;
    } else {
        cout << "Sum of natural numbers up to " << n << " is: " << sum_natural(n) << endl;
    }
    return 0;
}