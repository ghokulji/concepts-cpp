#include<iostream>
using namespace std;

int main()
{
    int num,d;

    cout<<"Enter number: ";
    cin>>num;

    cout<<"The digits present are: "<<endl;
    while(num>0)
    {
        d = num%10;
        num /= 10;

        cout<<d<<"\n";

    }
    return 0;
}