#include <iostream>
using namespace std;
    
int main(){
    int x =99;
    int* y = &x;
    // pointer is a datatype that stores the address of another variable 
    // & -->address of  
    cout<<"the address of x is "<<&x<<endl;
    cout<<"the address of x is "<<y<<endl;
    //* dereferencing operator it provides the value
    cout<<"the address of x is "<<*y<<endl;

//pointer to pointer
int** z =&y;
cout<<"the value  of z"<< &y<<endl;
cout<<"the value of z"<< z<<endl;
cout<<"the value  at z is"<< *z<<endl;
cout<<"the value  at z (value at Z) is"<< **z<<endl;

 }