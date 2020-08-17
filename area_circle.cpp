#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float radius,area;
    cout<<"Enter Radius of circle: ";
    cin>>radius;

    area = (22/7.0)*pow(radius,2);
    cout<<"Area of circle:  "<<area<<endl;

    return 0;
}
