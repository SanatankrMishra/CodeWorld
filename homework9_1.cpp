#include <iostream>
using namespace std;

int main()
{
    int row, column;

    for(row=1; row<=7; row=row+1)
    {
        for(column=1; column<=row; column=column+1)
        {
            cout << column<<" ";
        }
        cout << endl;
    }
    return 0;
}