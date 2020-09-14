#include<iostream>

using namespace std;

int main()
{
    int a[6]={5,4,3,2,1};
    int sum=0; 
    
    for(int i=0;i<sizeof(a)/sizeof(a[0]); i++)
    {
        sum += a[i];
    }

    cout<<"Sum of the array is: "<<sum;

    return 0;
}