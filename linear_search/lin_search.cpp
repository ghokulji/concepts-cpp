#include<iostream>
using namespace std;

int main()
{
    int a[10]={5,88,2,1,74,19,27,5,36,52};
    int num;

    cout<<"Enter number to be searched: ";
    cin>>num;

    for(int i=0;i<sizeof(a)/sizeof(a[0]); i++)
    {
        if(a[i] == num)
        {
            cout<<"The number "<<num<<" is at index "<<i;
            break;
        }
    }

    return 0;
}
