#include<iostream>
using namespace std;

int main()
{
    unsigned long int lim,fact=1;
    cout<<"Enter factorial limit: ";
    cin>>lim;

    for(int i=1;i<=lim;i++)
    {
        fact *=i;
    }

    cout<<"Factorial of "<<lim<<": "<<fact;
    
    return 0;
}