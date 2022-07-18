#include<iostream>
using namespace std;
// This is recursive solution Binary Search algorithm.

int bin_search(int arr[],int low, int high, int x)
{
    if (low>high)
    {
        return -1;
    }

    int mid=(low+high)/2;
    if (arr[mid]==x)
    {
        return mid;
    }
    else if (arr[mid]>x)
    {
        return bin_search(arr,low,mid-1,x);
    }
    else
    {
        return bin_search(arr,mid+1,high,x);
    }
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
    int res=bin_search(arr,0,n-1,x);
    if (res<0)
    {
        cout<<"The number is not present in the array."<<endl;
    }
    else
    {
        cout<<"The number is present in the array at position "<<res+1<<" ."<<endl;
    }
    return 0;
}

// Time Complexity for this solution is O(n), where n is number of elements in the array.
