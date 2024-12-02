#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setDetails()
    {
        cout << "Enter u id number" << endl;
        cin >> id;
      
        count++;
    }
    void printDetails()
    {
        cout << "Your id number is" << id << endl;
        cout << "Your count number is" << count << endl;
    }
};
int Employee::count;
int main()
{
    Employee harry, lovish, rohan;
    harry.setDetails();
   harry.printDetails();
   
    lovish.setDetails();
   lovish.printDetails();
    rohan.setDetails();
    rohan.printDetails();
}
