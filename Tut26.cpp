#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;
    friend Complex sumComplex(Complex, Complex);

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void printData()
    {
        cout << "the complex  number is " << a << "+" << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData((o2.a + o1.a), (o1.b + o2.b));

    return o3;
}
int main()
{
    Complex c1, c2, res;
    c1.setData(4, 5);
    c1.printData();

    c2.setData(5, 5);
    c2.printData();

    res = sumComplex(c1, c2);
    res.printData();

    return 0;
}