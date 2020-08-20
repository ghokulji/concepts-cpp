#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float basic_salary, allowance_p, deduc_p, net_sal;

    cout<<"Enter Basic Salary: ";
    cin>>basic_salary;

    cout<<"Enter Percentage Allowance: ";
    cin>>allowance_p;

    cout<<"Enter Percentage Deduction: ";
    cin>>deduc_p;

    net_sal = basic_salary+(basic_salary*allowance_p*0.01)-(basic_salary*deduc_p*0.015);
    cout<<"The Net Salary is: "<<net_sal;

    return 0;

}
