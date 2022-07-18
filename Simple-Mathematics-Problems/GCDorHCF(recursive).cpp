#include<iostream>
using namespace std;
//This is a recursive solution using Euclid's Algorithm to find the Greatest Common Divisor or HCF of two numbers.
int gcd(int a, int b)
{
    if (b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    int a,b;
    cout<<"Enter the first number :-";
    cin>>a;
    cout<<"Enter the second number :-";
    cin>>b;
    cout<<"The greatest common divisor or H.C.F. of given pair of numbers is :- "<<gcd(a,b)<<"."<<endl;
}

//Time Complexity of this solution is O(log(min(a,b))).
