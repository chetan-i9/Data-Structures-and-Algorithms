#include<iostream>
using namespace std;
// This is a recursive solution to print n natural numbers.
void print_1ton(int num)
{
    if (num==0)
        return;
    print_1ton(num-1);
    cout<<num<<" ";
}

int main()
{
    int num;
    cout<<"Enter any number:-";
    cin>>num;
    cout<<"Natural Numbers from 1 to given number n are- ";
    print_1ton(num);
}

// Time Complexity for this solution is O(n), where n is the given input number.
//This is because the function calls itself (n+1) times.
