#include<iostream>
using namespace std;
// This program is to remove the duplicate elements from the sorted array.

int rem_duplicates(int arr[],int n)
{
    int res=1;
    for (int i=1;i<n;i++)
    {
        if (arr[i]!=arr[res])
        {
            arr[res]=arr[i];
            res++;
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
    cout<<"Enter the elements of the  sorted array:-"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Input Sorted Array- { ";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl;

    int ind=rem_duplicates(arr,n);

    cout<<endl<<"After removing Duplicates- { ";
    for (int i=0;i<ind;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl;

    return 0;
}

// Time Complexity of the given solution is O(n), where n is number of elements in the array.
