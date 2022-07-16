#include<iostream>
using namespace std;
// This program is to find whether the array is sorted in increasing order.

bool is_sorted(int arr[], int n)
{
    for (int i=1;i<n-1;i++)
    {
        if (arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter the size of the input array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:-"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Input Array- { ";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl;
    if (is_sorted(arr,n))
    {
        cout<<endl<<"The array is sorted."<<endl;
    }
    else
    {
        cout<<endl<<"The array is not sorted."<<endl;
    }

    return 0;
}

// Time Complexity for this solution is O(n), where n is the number of elements in the array.
