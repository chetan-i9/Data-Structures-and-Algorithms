#include<iostream>
using namespace std;
//This program is for finding the largest element in the array.

int get_largest(int arr[],int n)
{
    int res=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]>arr[res])
        {
                res=i;
        }
    }
    return res;
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

    int ind=get_largest(arr,n);
    cout<<"The largest element in the given array is :- "<<arr[ind]<<endl;
    return 0;
}

// Time Complexity for this solution O(n), where n is the no. of elements.
