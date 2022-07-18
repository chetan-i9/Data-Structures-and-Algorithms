#include<iostream>
using namespace std;
// This is a naive solution to find the index of first occurrence of the given number in the sorted array.

int first_occ(int arr[],int n, int x)
{
    for (int i=0;i<n;i++)
    {
        if (arr[i]==x)
        {
            return i;
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

//Time complexity of this solution is O(n), where n is the number of elements in an array.
