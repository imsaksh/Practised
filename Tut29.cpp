#include <iostream>
using namespace std;
    
    class Complex{
        int a;
        int b;
        public:
        Complex(){
            a=0;
            b =0;

        }
        void printNumber(){
            cout<<"the complex number is"<<a<<" + "<<b<<"i"<<endl;
        }
    };
int main(){
    Complex c1,c2;
    c1.printNumber();
    c2.printNumber();
}