#include<bits/stdc++.h>
using namespace std;
// a solution for counting digits using logarithm
int count_digits(int num)
{
    return floor((log10(num)+1));
}

int main()
{
    int num,res;
    cout<<"Enter any integer :- ";
    cin>>num;
    res=count_digits(num);
    cout<<endl<<"Number of Digits in the given number is - "<<res;
}

//Time Complexity of this solution is O(1).
