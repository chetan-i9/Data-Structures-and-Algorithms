#include<iostream>
using namespace std;
//This is a program  is for inserting an element in an array.
int insertion(int arr[],int n, int cap, int num,int pos)
{
    if (n==cap)
    {
        cout<<"The element can't be inserted as the array is full."<<endl;
    }
    for (int i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
}

int main()
{
    int n,cap,pos, num;
    cout<<"Enter the capacity of the array:- ";
    cin>>cap;
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

    cout<<"\nEnter the number to be inserted and its position:-";
    cin>>num;
    cin>>pos;
    insertion(arr,n,cap,num,pos);
    cout<<"Output Array- { ";
    for (int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl;

}
//Time Complexity for the above solution is O(n), where n is number of elements in the array.
