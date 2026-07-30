/*
Q4) WAC++P to check char enter a digit, alphabet and special character using libraray function.
*/

#include <iostream>
#include <cctype> //Library for character handling functions
using namespace std;
int main() {
    char ch;
    cout << "Enter any character: ";
    cin >> ch;
    if (isalpha(ch)) {
        cout << "'" << ch << "' is an Alphabet." << endl;
    } 
    else if (isdigit(ch)) {
        cout << "'" << ch << "' is a Digit." << endl;
    } 
    else {
        cout << "'" << ch << "' is a Special Character." << endl;
    }
    return 0;
}