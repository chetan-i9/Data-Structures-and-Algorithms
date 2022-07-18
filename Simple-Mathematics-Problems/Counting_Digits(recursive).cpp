#include<iostream>
using namespace std;
// a recursive solution for counting numbers

int count_digits(int num)
{
    if (num==0)
        return 0;
    else
    {
        return 1+count_digits(num/10);
    }
}

int main()
{
    int num,res;
    cout<<"Enter any integer :- ";
    cin>>num;
    res=count_digits(num);
    cout<<endl<<"Number of Digits in the given number is - "<<res;
}
