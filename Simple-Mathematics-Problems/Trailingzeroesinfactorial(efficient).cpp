#include<iostream>
using namespace std;
// This is an efficient solution for calculating number of trailing zeroes occurring in a factorial.

int cnt_trailzeroes(int num)
{
    int count=0;
    for (int i=5;i<=num;i=i*5)
    {
        count=count+(num/i);
    }
    return count;
}

int main()
{
    int num;
    cout<<"Enter any number :-";
    cin>>num;
    cout<<"The number of trailing zeroes occurring in the factorial of given number is - "<<cnt_trailzeroes(num)<<"."<<endl;
}
// Time Complexity of this solution is O(log n), where n is the given input number.
