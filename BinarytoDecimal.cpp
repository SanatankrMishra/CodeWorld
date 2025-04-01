#include <iostream>
using namespace std;

int BinarytoDecimal(int num)
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
        mul = mul*2;
        
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter the number in Binary: ";
    cin >> num;

    

    cout << "The answer is: "<<BinarytoDecimal(num);

    return 0;
}