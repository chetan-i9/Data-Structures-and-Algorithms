#include<iostream>
using namespace std;
// This program finds the index of the first occurrence of the given number in the sorted array.
// This program uses Binary Search algorithm to find the required index.

int first_occ(int arr[],int n, int x)
{
    int low=0,high=n-1;

    while (low<=high)
    {
        int mid=(low+high)/2;
        if (arr[mid]>x)
        {
            high=mid-1;
        }
        else if (arr[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            if (mid==0 || arr[mid-1]!=arr[mid])
            {
                return mid;
            }
            else
            {
                high=mid-1;
            }
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

    cout<<"Enter the number whose first occurrence position is needed :- ";
    cin>>x;
    int res=first_occ(arr,n,x);
    if (res<0)
    {
        cout<<"The number is not present in the array."<<endl;
    }
    else
    {
        cout<<"The number first occurs at the position "<<res+1<<" in the array."<<endl;
    }
    return 0;
}

// Time Complexity of this solution is O(logn), where n is number of elements in the array.
