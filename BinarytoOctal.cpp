#include <iostream>
#include "BinarytoDecimal.hpp"
#include "DecimaltoOctal.hpp"
using namespace std;

int main()
{
    int num;
    cout << "Enter Number in Binary: ";
    cin >> num;
    int b2d = BinarytoDecimal(num);
    int d2o = DecimaltoOctal(b2d);

    cout << d2o;

    return 0;
}