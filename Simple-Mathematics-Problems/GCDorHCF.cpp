#include<bits/stdc++.h>
using namespace std;
// This is a solution using Euclid's Algorithm to find the Greatest Common Divisor or HCF of two numbers.
int hcf(int a, int b)
{
    while (a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}

int main()
{
    int a,b;
    cout<<"Enter the first number :-";
    cin>>a;
    cout<<"Enter the second number :-";
    cin>>b;
    cout<<"The greatest common divisor or H.C.F. of given pair of numbers is :- "<<hcf(a,b)<<"."<<endl;
}

//Time Complexity of this solution is O(log(min(a,b))).
