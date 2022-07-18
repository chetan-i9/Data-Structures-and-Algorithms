#include<iostream>
using namespace std;
// A solution for checking whether a number is a palindrome or not.
// A palindromic number is a number that remains the same when its digits are reversed.
bool is_Palindrome(int num)
{
    int tmp=num,rev=0;
    while (tmp!=0)
    {
        int l=tmp%10;
        rev=rev*10+l;
        tmp=tmp/10;
    }
    return (num==rev);
}

int main()
{
    int num;
    cout<<"Enter any number :-";
    cin>>num;
    if (is_Palindrome(num))
    {
        cout<<"The given number is a Palindrome."<<endl;
    }
    else
    {
        cout<<"The given number is not a Palindrome."<<endl;
    }
}

//Time Complexity of this solution is O(n), where n is number of digits in the given number.
