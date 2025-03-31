#include <iostream>
using namespace std;

int main()
{
    int row, column;

    for(row=1; row<=5; row=row+1)
    {
        for(column=1; column<=6; column=column+1)
        {
            cout << column*column*column<<" ";
        }
        cout << endl;
    }
    return 0;
}