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

    cout<<"Reverse of "<<check<<" is "<<rev;
    return 0;
}