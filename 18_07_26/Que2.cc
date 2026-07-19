// Write a C++ prog to find quotient & remainder of two numbers.
#include <iostream>
using namespace std;
int main() {
    int a, b, quo, rem;
    cout << "Enter num1: ";
    cin >> a;
    cout << "Enter num2: ";
    cin >> b;
    if (b == 0){ 
        cout << "Division by zero not allowed" << endl;
        return 1; 
    }
    quo = a/b;
    rem = a%b;
    cout << "Quotient=" << quo << ", Remainder=" << rem << endl;
    return 0;
}