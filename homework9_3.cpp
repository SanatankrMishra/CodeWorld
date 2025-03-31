#include <iostream>
using namespace std;

int main()
{
    int row, column;

    for(row=1; row<=6; row=row+1)
    {
        
        for(column=1; column<=row; column=column+1)
        {
            cout << 10+column-1<<" ";
        }
        cout << endl;
    }
    return 0;
}