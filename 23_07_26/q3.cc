// Q3) WAC++P to find root of a quadratic equation(real and imaginary).

#include <iostream>
#include <cmath> 
using namespace std;
int main(){
    float a, b, c;
    float disc, real, imag, r1, r2;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    if (a == 0) {
        cout << "Invalid quadratic equation (a cannot be 0)." << endl;
        return 1;
    }
    disc = (b * b) - (4 * a * c);
    if (disc > 0) {
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        cout << "Roots are real and distinct." << endl;
        cout << "Root 1 = " << r1 << endl;
        cout << "Root 2 = " << r2 << endl;
    }
    else if (disc == 0) {
        r1 = -b / (2 * a);
        cout << "Roots are real and equal." << endl;
        cout << "Root 1 = Root 2 = " << r1 << endl;
    }
    else {
        real = -b / (2 * a);
        imag = sqrt(-disc) / (2 * a);
        cout << "Roots are imaginary/complex." << endl;
        cout << "Root 1 = " << real << " + " << imag << "i" << endl;
        cout << "Root 2 = " << real << " - " << imag << "i" << endl;
    }
    return 0;
}