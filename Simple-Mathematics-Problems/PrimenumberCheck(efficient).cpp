#include<iostream>
using namespace std;
//This is an efficient solution to check whether a given number is prime or not.
bool is_Prime(int num)
{
    if (num==1)
        return false;
    for (int i=1;i*i<=num;i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}

int main()
{
    int num;
    cout<<"Enter any number:- ";
    cin>>num;
    if (is_Prime(num==true))
    {
        cout<<"The given number is a Prime Number."<<endl;
    }
    else
    {
        cout<<"The given number is not a Prime Number."<<endl;
    }
}

