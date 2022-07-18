#include<iostream>
using namespace std;
// This is an iterative solution for a finding a factorial of a number.
int factorial(int num)
{
    int res=1;
    for (int i=2;i<=num;i++)
    {
        res=res*i;
    }
    return res;
}

int main()
{
    int num;
    cout<<"Enter any number :-";
    cin>>num;
    int res=factorial(num);
    cout<<"The factorial of the given number is :- "<<res<<"."<<endl;
}
//Time Complexity of this solution is O(n), where n is the input number.
