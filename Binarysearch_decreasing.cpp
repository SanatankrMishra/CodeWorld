#include <iostream>
using namespace std;

int BinarySearch_decreasing(int arr[], int n, int key)

{
    int start=0, end=n-1,mid, ans=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            break;
        }
        else if(arr[mid]<key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
}

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the elements of array: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter Key: ";
    cin>>key;
    cout<<BinarySearch_decreasing(arr, size, key);

    return 0;
}