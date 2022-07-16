#include<iostream>
using namespace std;
// This program is to find the second largest element in the array.
int get_sec_largest(int arr[],int n)
{
    int res=-1, largest=0;
    for (int i=1;i<n;i++)
    {
        if (arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }

        else if (arr[i]!= arr[largest])
        {
            if (res==-1 || arr[i]>arr[res])
            {
                res=i;
            }
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

    int ind=get_sec_largest(arr,n);

    if (ind!=-1)
    {
        cout<<"The second largest element in the given array is :- "<<arr[ind]<<endl;
    }
    else
    {
        cout<<"The elements present in the array are same."<<endl;
    }

    return 0;
}

// Time Complexity for this solution is O(n), where n is the number of elements in the array.
