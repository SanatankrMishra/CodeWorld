#include <iostream>
using namespace std;

int main()
{
    int row, column; char name='A';

    for(row=1; row<=4; row=row+1)
    {
        
        for(column=1; column<=4-row+1; column=column+1)
        {
            cout <<(char)(name+column-1)<<" ";
        }
        cout << endl;
    }
    return 0;
}