#include<iostream>
using namespace std;

int main()
{
    int num,d,rev=0,check;

    cout<<"Enter number: ";
    cin>>num;

    check = num;
    while(num>0)
    {
        d = num%10;
        num /= 10;

        rev = rev*10 + d;
    }

    if(rev == check)
    {
        cout<<check<<" is a Palindrome number";
    }

    else
    {
        cout<<check<<" is not a Palindrome number";
    }
    
    return 0;
}