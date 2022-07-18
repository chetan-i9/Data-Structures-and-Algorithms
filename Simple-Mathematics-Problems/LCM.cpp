#include<iostream>
using namespace std;
//This is a solution for calculating LCM of given two numbers.
int gcd(int a, int b)
{
    if (b==0)
        return a;
    else
        return gcd(b,a%b);
}

int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    int a,b;
    cout<<"Enter the first number :-";
    cin>>a;
    cout<<"Enter the second number :-";
    cin>>b;
    cout<<"The L.C.M. for given pair of numbers is :- "<<lcm(a,b)<<"."<<endl;
}

//Time Complexity of this solution is O(log(min(a,b))).
