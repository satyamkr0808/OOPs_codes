/*
Q3) WAC++P to calculate number of days in month, take user input for month,year.
*/

#include <iostream>
using namespace std;
int main() {
    int month, year;
    int days = 0;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    if (month < 1 || month > 12) {
        cout << "Invalid month, please enter a value between 1 and 12." << endl;
        return 1; // Exit the program with an error code
    }
    switch (month) {
        // Months with 31 days
        case 1:  //January
        case 3:  //March
        case 5:  //May
        case 7:  //July
        case 8:  //August
        case 10: //October
        case 12: //December
            days = 31;
            break;
            
        // Months with 30 days
        case 4:  //April
        case 6:  //June
        case 9:  //September
        case 11: //November
            days = 30;
            break;
            
        // February logic with leap year validation
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29; //Leap year
            } else {
                days = 28; //Common year
            }
            break;
    }
    cout << "Number of days in month " << month << " of year " << year << " is: " << days << endl;    
    return 0;
}