#include <iostream>
using namespace std;

int main()
{
    int row, column;

    for(row=1; row<=6; row=row+1)
    {
        for(column=1; column<=5; column=column+1)
        {
            cout << column*column<<" ";
        }
        cout << endl;
    }
    return 0;
}