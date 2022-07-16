#include<iostream>
using namespace std;
// This program is to get the frequency of the elements in the sorted array.

void freq_ele(int arr[],int n)
{
    int i=1, freq=1;
    while (i<n)
    {
        while ( i<n && arr[i]==arr[i-1])
        {
            i++;
            freq++;
        }
            cout<<arr[i-1]<<" - "<<freq<<endl;
            i++;
            freq=1;
    }

    if (n==1 || arr[n-1]!=arr[n-2])
    {
        cout<<arr[n-1]<<" - "<<"1"<<endl;
    }
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
    cout<<endl<<"E"<<" - "<<"F"<<endl;
    freq_ele(arr,n);

    return 0;
}
