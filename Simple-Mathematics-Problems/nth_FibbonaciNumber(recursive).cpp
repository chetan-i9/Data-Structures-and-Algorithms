#include<iostream>
using namespace std;
// This is a recursive solution to find the nth Fibonacci Number.
int n_fibonacci(int num)
{
    if (num<=1)
        return num;
    return n_fibonacci(num-1)+n_fibonacci(num-2);
}
int main()
{
    int num;
    cout<<"Enter any number:-";
    cin>>num;
    cout<<"The nth Fibonacci Number is "<<n_fibonacci(num)<<endl;
}
