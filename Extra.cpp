// PROG. 6
// WAP to perform addition of two complex numbers using  constructor overloading. The first constructor which takes no argument is used to create objects which are not initialized, second which takes one argument is used to initialize real and imag parts to equal values and the third,
//  which takes two arguments is used to initialize real and imag parts to two different values.
#include <iostream>
using namespace std;
    
    class Complex{
        int a;
        int b;
        public:
        Complex(){
            a=0;
            b=0;

        }
        Complex(int a1){
            a=a1;
            b=a1;

        }
        Complex(int a1,int b1){
            a=a1;
            b=b1;

        }
        void printNumber(){
            cout<<"The complex number is"<<a<<"+"<<b<<"i"<<endl;
        }
   void addNumbers(Complex o1,Complex o2){
     a = o1.a+ o2.a;
     b = o1.b+ o2.b;
 
     }
    };
int main(){
      Complex c1,sum;
      c1.printNumber();
      Complex c2(6);
      c2.printNumber();
      Complex c3(5,9);
      c3.printNumber();
   
  sum.addNumbers(c2,c3);
   sum.printNumber();

}