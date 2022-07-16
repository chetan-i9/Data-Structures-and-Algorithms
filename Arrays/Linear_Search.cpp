#include<iostream>
using namespace std;
// This is program  is for searching (linear search) an element in an array.
int search_op(int arr[],int n, int num)
{
    int flag=-1;
    for(int i=0;i<n;i++)
    {
        if (arr[i]==num)
        {
            flag=0;
            cout<<"The given number is present in the array."<<endl;
            break;
        }
    }
    if (flag==-1)
    {
        cout<<"The given number isn't present in the array."<<endl;
    }
}

int main()
{
    int n,num;
    cout<<"Enter the size of the array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:-"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched:-";
    cin>>num;
    search_op(arr,n,num);
}
//Time Complexity for this solution is O(n), where n is the number of elements in an array.
