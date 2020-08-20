#include<iostream>

using namespace std;

int main()
{
    int option;
    int a,b;
    cout<<"1. Add\n"<<"2. Subract\n"<<"3. Multiply\n"<<"4. Divide\n";

    cout<<"Enter Option: ";
    cin>>option;

    cout<<"Enter Two numbers: ";
    cin>>a>>b;

    switch(option)
    {
        case 1: cout<<"The Addition of Two numbers are: "<<a+b;
        break;

        case 2: cout<<"The difference of the two numbers are: "<<a-b;
        break;

        case 3:cout<<"The product of the two numbers are: "<<a*b;
        break;

        case 4:cout<<"The division of the two numbers are: "<<(float)a/b;
        break;

        default:cout<<"Enter valid option";
    }

    return 0;
}