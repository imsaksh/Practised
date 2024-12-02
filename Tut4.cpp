#include <iostream>
using namespace std;


int globe =100;
int main(){
   int globe = 200;
   cout<<"the value of globe is\t"<< globe<<endl;
   cout<<"the value of globe is\t"<< ::globe<<endl;

    // therefore the value of  global to access is use scope resolution ::

}