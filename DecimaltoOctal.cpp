#include <iostream>
using namespace std;

int DecimaltoOctal(int num)
{
    int ans=0, mul=1, rem;
    while(num>0)
    {
        //Obtaining the remainder
        rem = num%8;
        //Quotient part
        num = num/8;
        //Answer part;
        ans = rem*mul+ans;
        //Updating multiplier
        mul = mul*10;
        
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter the number in Decimal: ";
    cin >> num;

    

    cout << "The answer is: "<<DecimaltoOctal(num);

    return 0;
}