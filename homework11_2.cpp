#include <iostream>
using namespace std;

int main()
{
    int row, column, n;
    cout << "Enter value of n: ";
    cin >> n;

    for(row=1; row<=n; row=row+1)
    {
        
        for(column=1; column<=n-row; column=column+1)
        {
            cout <<" ";
        }
        for(column=1; column<=row; column=column+1)
        {
            cout << "*" <<" ";
        }
        cout << endl;
    }
    return 0;
}