#include <iostream>
using namespace std;
    
int main(){
    // for(int i=0;i<30;i++){
    //    cout<<i<<endl;
    //     if(i==5){
    //         break;
    //     }
    // }
    for(int i=0;i<30;i++){
        if(i==5){
            continue;
        }
       cout<<i<<endl;
    }
    // for(int i=0;i<30;i++){
    //     if(i==5){
    //         break;
    //     }
    //    cout<<i<<endl;
    // }
    // the major differene between break and continue is where u write break is used to exit the loop and cntinue used to move next iteration skipping current one
}