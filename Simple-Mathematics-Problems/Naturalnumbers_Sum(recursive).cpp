#include<iostream>
using namespace std;
//This is a recursive solution to obtain the sum of n natural numbers.
int sum_of_n(int num)
{
    if (num==0)
        return 0;
    return num+sum_of_n(num-1);
}

int main()
{
    int num;
    cout<<"Enter any number:-";
    cin>>num;
    cout<<"Sum of given n Natural Numbers is- "<<sum_of_n(num)<<endl;
}

//Time Complexity of this solution is O(n), where n is given input number.
