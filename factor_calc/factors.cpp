#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number whose factors you require: ";
    cin>>num;

    cout<<"The Factors of "<<num<<": "<<endl;
    for(int i=1;i<num;i++)
    {
        if(num%i == 0)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}