#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i;
    double cur1,prev1, curbill, total;
    char op;

    cout<<"SeatNumber: 31";
    cout<<"\nSeatWork number: 21";
    cout<<"\n\n\t\t\tWater Bill Calculator\n\n";
    cout<<"[1] Residential cost P20.00\n[2] Commercial cost P30.00\n\n";

    cout<<"Account Classification::\n\n";
    cout<<"What is your current water consumption in cubic meter: ";
    cin>>cur1;
    cout<<"What is your previous water consumption in cubic meter: ";
    cin>>prev1;

    if(prev1 >= cur1){
                curbill = prev1 - cur1;
            } 
            else
            {
                curbill = cur1 - prev1;
            }

    cout<<"\n\nSelect whether: Residential or Commercial\n\n";
    cout<<"\nEnter what number: ";
    cin>>op;

    switch (op) 
    {
        case '1':
            total = 20.00 * curbill;
            cout<<"\n\nThe total bill is: "<< total << " pesos";
            break;
        
        case '2':
            total = 30.00 * curbill;
            cout<<"\n\nThe total bill is: "<< total << " pesos";
            break;
        
        default:
        cout<<"\nInvalid input!!!\n";
        break;
    }
    return 0;
}
