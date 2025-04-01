#include <iostream>
#include "OctaltoDecimal.hpp"
#include "DecimaltoBinary.hpp"
using namespace std;

int main()
{
    int num;
    cout << "Enter Number in Binary: ";
    cin >> num;
    int o2d = OctaltoDecimal(num);
    int d2b = DecimaltoBinary(o2d);

    cout << d2b;

    return 0;
}