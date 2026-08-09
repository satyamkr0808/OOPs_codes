/*
Q3) WAC++P to calculate sum and  average of all elements present in an array.
*/

#include <iostream>
using namespace std; 

int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    float sum = 0.0,avg;
    cout << "Enter " << n << "elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
     cout << "Sum of all elements = " << sum << endl;
    avg = sum / n;
    cout << "Average of all elements = " << avg << endl;
    return 0;
}