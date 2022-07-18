#include<iostream>
using namespace std;
// This is a recursive solution to convert a decimal number into its binary form.
void bin_to_dec(int num)
{
    if (num==0)
        return;
    bin_to_dec(num/2);
    cout<<num%2;
}

int main()
{
    int num;
    cout<<"Enter any number :-";
    cin>>num;
    cout<<"The Binary Number representation for given decimal number is-";
    bin_to_dec(num);
}
