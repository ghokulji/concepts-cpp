#include<iostream>
using namespace std;

int main()
{
    int lim,sum=0;
    cout<<"Enter sum of numbers limit: ";
    cin>>lim;

    for(int i=1;i<=lim;i++)
    {
        sum +=i;
    }

    cout<<"Sum of "<<lim<<" numbers: "<<sum;
    
    return 0;
}