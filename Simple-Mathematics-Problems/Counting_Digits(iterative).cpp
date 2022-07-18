#include<iostream>
using namespace std;
// An iterative solution for counting number of digits

int count_digits(int num)
{
    int count=0;
    while(num>0)
    {
        num=num/10;
        count++;
    }
    return count;
}

int main()
{
    int num,res;
    cout<<"Enter any integer :- ";
    cin>>num;
    res=count_digits(num);
    cout<<endl<<"Number of Digits in the given number is - "<<res;
}

//Time Complexity for this solution is O(n) , where n is number of digits in the number.
