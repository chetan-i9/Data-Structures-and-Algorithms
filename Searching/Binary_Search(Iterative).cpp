#include<iostream>
using namespace std;
// This program is an iterative solution for Binary Search Algorithm.

int bin_search(int arr[],int n,int x)
{
    int low=0, high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if (mid==x)
        {
            return mid;
        }

        else if (arr[mid]>x)
        {
             high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n,x;
    cout<<"Enter the size of the array:-";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the sorted array :- ";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"The Input Array :- { ";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl<<endl;

    cout<<"Enter the number to be searched in the array :- ";
    cin>>x;
    int res=bin_search(arr,n,x);
    if (res<0)
    {
        cout<<"The number is not present in the array."<<endl;
    }
    else
    {
        cout<<"The number is present in the array at position "<<res<<" ."<<endl;
    }
    return 0;
}

// Time Complexity for this solution is O(logn), where n is the number of elements in the array.
