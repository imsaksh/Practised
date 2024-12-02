#include <iostream>
#include <vector>

using namespace std;

int main(){
     vector<int> vec = {1,2,3,4,5};

     cout<<"vec.begin:"<<*(vec.end())<<endl;
     cout<<"vec.end:"<<*(vec.begin())<<endl;

 //  vector<int>:: iterator it;
   for( auto it = vec.begin();it!= vec.end();it++){
        cout<<*(it)<<" "<<endl;
   }
   for( auto it = vec.rbegin();it!= vec.rend();it++){
        cout<<*(it)<<" "<<endl;
   }


}

    //  vec.clear();
    // for( int val :vec){
    //     cout<<val<<endl;
    // }
    // cout<<"the size is"<< vec.size()<<endl;
    // cout<<"the capacity is"<< vec.capacity()<<endl;
    // insert , erase

    // cout<<"the size is"<< vec.size()<<endl;
    // cout<<"the capacity is"<< vec.capacity()<<endl;
   
    // cout<<"the size is"<< vec.size()<<endl;
    // cout<<"the capacity is"<< vec.capacity()<<endl;


