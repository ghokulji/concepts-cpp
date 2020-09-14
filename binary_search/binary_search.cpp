#include<iostream>
using namespace std;

int main()
{
    int a[10]={1,2,5,14,55,67,155,264,512,1024};
    int l=0,h=sizeof(a)/sizeof(a[0]), mid=0, num=0;

    mid= (l+h)/2;
    cout<<"Enter number to be searched for: ";
    cin>>num;

    while (l<=h)
    {
        mid = (l+h)/2;
        if(a[mid] == num)
        {
            cout<<"The number is at index "<<mid;
            return 0;
        }

        else if (num > a[mid])
        {
            l = mid+1;
        }

        else
        {
            h = mid-1;
        }
    
    };

    cout<<"The number is not found";

}