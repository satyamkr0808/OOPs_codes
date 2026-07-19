//Write a C++ prog to input an array.

#include <iostream>
using namespace std;
int main() {
    int n, a[20], i;
    cout << "Enter size of arr:";
    cin >> n;
    for(i = 0; i < n; i++){ 
        cin >> a[i]; 
        }
    cout << "Array created is:"<<endl;    
    for (i = 0; i < n; i++){
        cout << a[i] << endl; 
        }
    return 0;
}