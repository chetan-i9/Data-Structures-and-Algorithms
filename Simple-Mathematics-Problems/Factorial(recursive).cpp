#include<iostream>
using namespace std;
// This is recursive solution for a finding a factorial of a number.
int factorial(int num)
{
    if (num==0)
        return 1;
    else
        return num*factorial(num-1);
}

int main()
{
    int num;
    cout<<"Enter any number :-";
    cin>>num;
    int res=factorial(num);
    cout<<"The factorial of the given number is :- "<<res<<"."<<endl;
}
//Time Complexity of this solution is O(n), where n is the given input number.
