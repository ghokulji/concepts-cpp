#include<iostream>
using namespace std;

int main()
{
    int num,count=0;
    cout<<"Enter number: ";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        if(num%i == 0)
        {
            count++;
        }
    }

    if(count == 2)
        cout<<num<<" is a Prime number";

    else
        cout<<num<<" is not a Prime number";

    return 0;
}