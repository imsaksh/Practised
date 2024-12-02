#include <iostream>
using namespace std;
    
    // function protyping is the one in whcih the return type and argument passed to function is mentionded
    int sum(int,int);

int main(){
    cout<<"the sum is "<<sum(67,23);
}
int sum(int a ,int b){
    return (a+b);
}
//formal argument are ones in which the actual arguments are paased
// actual arguments are the one in which are passed to function 67 23 eg in this