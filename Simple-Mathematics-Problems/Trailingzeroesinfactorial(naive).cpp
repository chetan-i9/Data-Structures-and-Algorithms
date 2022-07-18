#include<iostream>
using namespace std;
//This is a naive solution for calculating the number of trailing zeroes occurring in a factorial.
int cnt_trailzeroes(int num)
{
    int factorial=1;
    for (int i=2;i<=num;i++)
    {
        factorial=factorial*i;
    }

    int count=0;
    while (factorial%10== 0)
    {
        count=count++;
        factorial=factorial/10;
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

//Time Complexity of the given solution is O(n), where n is the given input number.
