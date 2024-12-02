#include <iostream>
using namespace std;
    
int main(){
    int age;
    cout<<"Enter the age of your";
    cin>>age;
    if(age>18){
        cout<<"Surely u are eligible to drive";
        
    }
   else if(age<18 && age>1){
        cout<<"play with video games not eligible";

    }
    else if(age<=0){
      cout<<"yet to born";
    }
    else{
        cout<<"surely u drive safley";
    }
}