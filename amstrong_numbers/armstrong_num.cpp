//Armstrong number: Sum of cube of digitsis equal to the number itself.
//Example: 153 = 1^3 + 2^3 + 3^3

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,d,check,sum=0;

    cout<<"Enter number: ";
    cin>>num;

    check = num;
    while(num>0)
    {
        d = num%10;
        num /= 10;

        sum += pow(d,3);
    };

    if(sum == check)
    {
        cout<<check<<" is an Armstrong Number";
    }

    else
    {
        cout<<check<<" is not an Armstrong Number";
    }

    return 0;
    
}