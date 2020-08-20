#include<iostream>

using namespace std;


int main()
{
    int num,lim;
    cout<<"Enter number: ";
    cin>>num;

    cout<<"Enter limit: ";
    cin>>lim;

    cout<<num<<"'s Multiplication Table"<<endl;
    for(int i=1;i<=lim;i++)
    {
        cout<<num<< "x" <<i<<" = "<<i*num<<"\n";
    }

    return 0;
}