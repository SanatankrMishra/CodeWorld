#include <iostream>
using namespace std;

int main()
{
    int row, column;

    for(row=1; row<=5; row=row+1)
    {
        for(column=1; column<=6; column=column+1)
        {
            char name='F'+column-1;
            cout << name<<" ";
        }
        cout << endl;
    }
    return 0;
}