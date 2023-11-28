#include<iostream>
#include<cstdlib>

using namespace std;

int main()

{
    int kilowatt;
    float rate_per_kwh = 0, bill = 0;

    cout<<"\nThis Program will Compute your electricity bill.\n\n";
    cout<<"===================================================================================";
    cout<<"\nRates::";
    cout<<"\nIf your used Kilowatts is 20 or less the rate per kilowatt/hour is : P5.50/kwh.";
    cout<<"\nIf your used Kilowatts is 21 to 50 the rate per kilowatt/hour is : P10.00/kwh.";
    cout<<"\nIf your used Kilowatts is more than 50 the rate per kilowatt/hour is : P15/kwh.";
    cout<<"\n\nPlease Enter your used Kilowatts: ";
    cin>>kilowatt;

    if(kilowatt <= 20)
    {
        rate_per_kwh = 5.50;
        bill = kilowatt * rate_per_kwh;
        cout<<"\nComputation:";
        cout<<"\nUsed Kilowatts "<< kilowatt << " X P"<< rate_per_kwh; 
        cout<<"\n-------------------------------------";
        cout<<"\nYour Electric bill is : "<< bill;
    }
    else
        if(kilowatt > 20 && kilowatt <= 50 )
        {
            rate_per_kwh = 10.00;
            bill = kilowatt * rate_per_kwh;
            cout<<"\nComputation:";
            cout<<"\nUsed Kilowatts "<< kilowatt << " X P"<< rate_per_kwh; 
            cout<<"\n-------------------------------------";
            cout<<"\nYour Electric bill is : "<< bill;
        }
        else
        {
            rate_per_kwh = 15.00;
            bill = kilowatt * rate_per_kwh;
            cout<<"\nComputation:";
            cout<<"\nUsed Kilowatts "<< kilowatt << " X P"<< rate_per_kwh;
            cout<<"\n-------------------------------------"; 
            cout<<"\nYour Electric bill is : "<< bill;
        }






    return 0;
}