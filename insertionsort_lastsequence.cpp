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
    for(int i=size-1; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
    }
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}