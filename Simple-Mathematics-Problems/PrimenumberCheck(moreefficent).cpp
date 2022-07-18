#include<iostream>
using namespace std;
//This is a more efficient solution to check whether a given number is prime or not.
bool is_Prime(int num)
{
    if (num==1)
        return false;
    if (num==2 || num==3)
        return true;
    if (num%2==0 || num%3==0)
        return false;
    for (int i=5;i*i<=num;i=i+6)
    {
        if(num%i==0 || num%(i+2)==0)
            return false;
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

