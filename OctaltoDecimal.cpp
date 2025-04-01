#include <iostream>
using namespace std;

int OctaltoDecimal(int num)
{
    int ans=0, mul=1, rem;
    while(num>0)
    {
        //Obtaining the remainder
        rem = num%10;
        //Quotient part
        num = num/10;
        //Answer part;
        ans = rem*mul+ans;
        //Updating multiplier
        mul = mul*8;
        
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter the number in Octal: ";
    cin >> num;

    

    cout << "The answer is: "<<OctaltoDecimal(num);

    return 0;
}