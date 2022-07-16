#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int low=0, high=n-1;
    while (low<high)
    {
        // swapping of values..
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;

        low++;
        high--;
    }
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

    reverse(arr,n); //reversing the given array.

    cout<<endl<<"Reversed Array- { ";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl;

    return 0;
}
