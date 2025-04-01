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
    for(int i=0; i<size-1; i++)
    {
        int index = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j]<arr[index])
            {
                index = j;
            }
        }
        swap(arr[index],arr[i]);
    }
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}