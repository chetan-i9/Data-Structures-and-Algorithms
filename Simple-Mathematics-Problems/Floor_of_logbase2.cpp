#include<iostream>
using namespace std;

int floor_of_log(int num)
{
    if (num==1)
        return 0;
    else
        return 1+floor_of_log(num/2);
}

int main()
{
    int num;
    cout<<"Enter any natural number:- ";
    cin>>num;
    cout<<"Floor(log("<<num<<")) base 2 is "<<floor_of_log(num)<<endl;
}
