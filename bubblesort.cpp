#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the elements of the array: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<size; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(arr[j]>arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else
            {
                break;
            }
        }
    }
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}