/* Q2) WAc++P to find the largest among 3 numbers 
       entered by user using nested if elsestatement*/

# include <iostream>
using namespace std;
int main(){ 
    int a,b,c;
    cout<<"Enter 1st number:";
    cin>> a ;
    cout<<"Enter 2nd number:";
    cin>> b ;
    cout<<"Enter 3rd number:";
    cin>> c ;
if (a >= b && a >= c) {
        cout << "Largest number = " << a;
    }
    else if (b >= a && b >= c) {
        cout << "Largest number = " << b;
    }
    else {
        cout << "Largest number = " << c;
    }

    return 0;
}
