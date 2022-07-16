#include<iostream>
using namespace std;
//This is a program for deletion of an element from an array.
int deletion(int arr[],int n,int num)
{
    int i;
    for (i=0;i<n;i++)
    {
        if (arr[i]==num)
            break;
    }
    if (i==n)
    {
        cout<<"The element doesn't exists in the array."<<endl;
        return n;
    }
    for (int j=i;j<n-1;j++)
    {
        arr[j]=arr[j+1];
    }
    return n-1;
}

int main()
{
    int n,num;
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

    cout<<"\nEnter the number to be deleted :-";
    cin>>num;

    int ind=deletion(arr,n,num);
    cout<<"Output Array- { ";
    for (int i=0;i<ind;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl;

}
//Time Complexity for the above solution is O(n), where n is number of elements in the array.
