/*
Q1) WAC++P to create a fibonnaci series using while loop take user input for number of terms to be displayed.
*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of terms to be displayed: ";
    cin >> n;
    int t1 = 0,t2 = 1,count = 0;
    if (n <= 0) {
        cout << "Enter a positive integer greater than 0." << endl;
    } else {
        cout << "Fibonacci series: ";
        while (count < n) {
            cout << t1 << " ";
            int next_term = t1 + t2;
            t1 = t2;
            t2 = next_term;
            count++;
        }
        cout << endl;
    }
    
    return 0;
}