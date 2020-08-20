#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int total_bill;
    float discount,final_bill;

    cout<<"Enter Total Bill Amount: ";
    cin>>total_bill;

    if(total_bill>=500)
    {
        discount=total_bill*0.20;
        final_bill= total_bill - discount;
        cout<<"The discount amount is: "<<discount<<endl;
        cout<<"The final amount to be paid: "<<lround(final_bill)<<endl;
    }

    else if(total_bill>=100 && total_bill<500)
    {
        discount=total_bill*0.10;
        final_bill= total_bill - discount;
        cout<<"The discount amount is: "<<discount<<endl;
        cout<<"The final amount to be paid: "<<lround(final_bill)<<endl;
    }

    else if(total_bill<100 && total_bill>0)
    {
       
        cout<<"No Discount"<<endl;
        cout<<"The final amount to be paid: "<<total_bill;
    }
        
    else
    {
        cout<<"Enter valid bill amount";
    }
    
    
    return 0;
}

