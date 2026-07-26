/* Q1) Write a C++ prog to declare and initalize var.of 
all basic types and return value along with their sizes using  sizeof operator.*/
# include <iostream>
using namespace std;
int main(){
    int a; float b; char c; double d; long int e;
    signed int f; unsigned int g; short int h; long double i;

    cout<< sizeof(a)<<endl<<
    sizeof(b)<<endl<<
    sizeof(c)<<endl<<
    sizeof(d)<<endl<<
    sizeof(e)<<endl<<
    sizeof(f)<<endl<<
    sizeof(g)<<endl<<
    sizeof(h)<<endl<<
    sizeof(i)<<endl;
    return 0;
}