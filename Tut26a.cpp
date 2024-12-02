#include <iostream>
using namespace std;
    
    class Complex{
        int real;
        int imag;

        public:
         void setData(int a,int b){
           real = a;
           imag =b;
        }
friend Complex printAddData(Complex c1,Complex c2);
 void printData(){
    cout<<"the real and imag part is"<<real<<"+"<<"i"<<imag<<endl;
 }
    };
   Complex printAddData(Complex c1,Complex c2){
       Complex c3;
         c3.setData((c1.real + c2.real), (c2.imag+c1.imag) );
       return c3;
    }
int main(){
    Complex c4;
    c4.setData(5,7);
    c4.printData();

    Complex c6;
    c6.setData(2,5);
    c6.printData();
    Complex sum;
    sum = printAddData(c4,c6);
     sum.printData();
}