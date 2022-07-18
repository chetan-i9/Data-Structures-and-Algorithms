#include<iostream>
using namespace std;
// This is a naive solution for checking a given number is prime or not.
bool is_Prime(int num)
{
    if (num==1)
        return false;
    for (int i=2;i<num;i++)
    {
        if (num%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout<<"Enter any number:- ";
    cin>>num;
    if (is_Prime(num))
    {
        cout<<"The given number is a Prime Number."<<endl;
    }
    else
    {
        cout<<"The given number is not a Prime Number."<<endl;
    }
}
// Time Complexity of this solution is O(n),where n is the given input number.
