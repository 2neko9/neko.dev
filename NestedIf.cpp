#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int nhw, rph, bpay, tax, npay;

    cout<<"Enter the number of hours worked in a month: ";
    cin>>nhw;
    cout<<"Basic Pay = ";
    cin>>rph;

    bpay = nhw * rph;

    cout<<"\nBasic Pay = "<< bpay <<"\n";
    if (bpay <= 10000)
    {
        tax = bpay * 0.05;
        
        cout<<"TAX @5% = "<<tax<<"\n";
    }
        else
            if (bpay <= 20000)
            {
                tax = bpay * 0.075;
        
                cout<<"TAX @7.5% = "<<tax<<"\n";
            }
                else
                {
                    tax = bpay * 0.1;

                    cout<<"TAX @10% = "<<tax<<"\n";
                }
    
    npay = bpay - tax;

    cout<<"Net Pay = "<< npay<<"\n\n";

    return 0;
}