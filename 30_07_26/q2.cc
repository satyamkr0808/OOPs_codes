/*
Q2) WAC++P to calculate sum of digit of a number using do-while loop take user input for num and display sum.
*/

#include <iostream>
using namespace std;
int main() {
    int num, original_num, sum = 0;
    cout << "Enter an integer: ";
    cin >> num;
    original_num = num;
    if (num < 0) {
        num = -num; 
    }
    do {
        sum += num % 10;
        num /= 10;
    } while (num > 0);
    cout << "The sum of digits of " << original_num << " is: " << sum << endl;
    
    return 0;
}