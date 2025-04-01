#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout <<endl<<"Enter the array's elements: ";

    for(int i=0; i<size; i=i+1)
    {
        //Input the elements
        cin >> arr[i];
    }
    
    //Reiterate the Element
    cout << "These are the elements of the array: ";
    for(int i=0; i<size; i=i+1)
    {
        cout<<arr[i]<<" ";
    }
    
    int ans1 = INT_MAX;
    int ans2 = INT_MIN;
    int sum = 0;

    for(int i=0; i<size; i++)
    {
        //Min element
        if(ans1>arr[i])
        ans1 = arr[i];
        
        //Max element
        
        if(ans2<arr[i])
        ans2 = arr[i];
        
        // Sum of Elements in the Array

        
        sum = arr[i]+sum;
        
    }
    cout << "\nYour minimum element is: "<< ans1 <<endl;
    cout << "Your maximum element is: "<< ans2 <<endl;
    cout << "Your sum of array elements is: "<< sum << endl;

    return 0;
}