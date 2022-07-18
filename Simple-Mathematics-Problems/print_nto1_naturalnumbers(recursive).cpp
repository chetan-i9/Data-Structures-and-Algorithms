#include<iostream>
using namespace std;
// This is a recursive solution to print n natural numbers in reverse order.
void print_nto1(int num)
{
    if (num==0)
        return;
    cout<<num<<" ";
    print_nto1(num-1);
}

int main()
{
    int num;
    cout<<"Enter any number:-";
    cin>>num;
    cout<<"Natural Numbers from given number n to 1 are- ";
    print_nto1(num);
}
// Time Complexity for this solution is O(n), where n is the given input number.
//This is because the function calls itself (n+1) times.
