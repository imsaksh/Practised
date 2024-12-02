#include <iostream>
// #include <cstring>
using namespace std;

class BankAccount
{
    string depositor_name;
    int account_number;
    string account_type;
    int balance_amount;

public:
    void setValues(string a, int b, string c, int d)
    {

        depositor_name =a ;
        account_number =b ;

        account_type = c;
        balance_amount =d ;
    }
    void deposit(int amount) 
    {
        balance_amount += amount;
    }
    void withDrawal(int e){
        if(e<=balance_amount){
            balance_amount -= e;
            cout<<"U CAN SUCCESFULLY WITHDRAWAL";
        }
        else{
          cout<< "inelgible";
        }
    }
    void display(){
        cout<<"your name is"<<depositor_name<<endl;
        cout<<"your balance is"<<balance_amount<<endl;
     //  cout<<"your balance is"<<withDrawal<<endl;
        cout<<"your balance is"<<account_type<<endl;
        cout<<"your balance is"<<account_number<<endl;
    }
};
int main()
{
    BankAccount c1;
    c1.setValues("Alex carey", 454785854, "saving", 1000);
    c1.deposit(1000);
    c1.withDrawal(200);
    c1.display();
}