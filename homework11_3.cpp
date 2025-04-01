#include <iostream>
using namespace std;

int main()
{
    int row, column, n;
    cout << "Enter value of n: ";
    cin >> n;

    for(row=1; row<=n; row=row+1)
    {
        char name='A';
        for(column=1; column<=n-row; column=column+1)
        {
            cout <<"  ";
        }
        for(column=1; column<=row; column=column+1)
        {
            cout << (char)(name+column-1) <<" ";
        }
        for(column=row-1; column>=1; column=column-1)
        {
            cout << (char)(name+column-1) <<" ";
        }
        cout << endl;
    }
    return 0;
}