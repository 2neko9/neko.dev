#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i;
    double cur1,prev1, curbill, total;
    char op;

    string choice[3] = {"","[1] Residential cost P20.00", "[2] Commercial cost P30.00"};

    cout<<"Select whether: Residential or Commercial\n\n";
    for( i = 1; i < 3; i++){
                cout<<choice[i]<<"\n";
                    }
    cout<<"\nEnter what number: ";
    cin>>op;
    cout<<"\n\nAccount Classification\n\n";
    cout<<"What is your current water consumption in cubic meter: ";
    cin>>cur1;
    cout<<"What is your previous water consumption in cubic meter: ";
    cin>>prev1;

    switch (op) 
    {
        case '1':;
            if(prev1 > cur1){
                curbill = prev1 - cur1;
            } else{
                curbill = cur1 - prev1;
            }
        total = 20.00 * curbill;
        cout<<"\n\nThe total bill is : "<< total << " pesos";
        
        break;
    }
    switch (op) 
    {
        case '2':;
            if(prev1 > cur1){
                curbill = prev1 - cur1;
            } else{
                curbill = cur1 - prev1;
            }
        total = 30.00 * curbill;
        cout<<"\n\nThe total bill is: "<< total << " pesos";
        
        break;
    }
    return 0;
}