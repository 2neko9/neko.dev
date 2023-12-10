#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double num1,num2,sum,diff,prod,quot;
    char op;

    cout<<"SeatNumber: 31";
    cout<<"\nSeatWork number: 23";
    cout<<"Sample Calculator\n\n";
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Choose what operation: ";
    cin>>op;

    switch (op)
    {
    case '+':;
        sum = num1 + num2;
        cout<<"\n\nThe sum of Num1 and Num2 is: " << sum;
        break;
   
    case '-':;
        diff = num1 - num2;
        cout<<"\n\nThe difference of Num1 and Num2 is: " << diff;
        break;
  
    case '*':;
        prod = num1 * num2;
        cout<<"\n\nThe product of Num1 and Num2 is: " << prod;
        break;
   
    case '/':;
        quot = num1 / num2;
        cout<<"\n\nThe quotient of Num1 and Num2 is: " << quot;
        break;
        
    default:
        cout<<"\nThe Operation you input is invalid.\n";
        break;
    }




    return 0;
}
