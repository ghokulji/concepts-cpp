//Perfect number: Sum of factors is equal to the number itself
//Example: 28 (Factors: 1+2+4+7+14)
#include<iostream>
using namespace std;

int main()
{
    int num,sum=0;
    cout<<"Enter number: ";
    cin>>num;

    for(int i=1;i<num;i++)
    {
        if(num%i == 0)
        {
            sum +=i;
        }
    }

    if(sum == num)
    {
        cout<<num<<" is a Perfect Number";
    }

    else
    {
        cout<<num<<" is not a Perfect Number";
    }
    

    return 0;
}