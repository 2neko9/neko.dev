#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double num1,num2,sum,diff,prod,quot;
    char op;

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
    }
    switch (op)
    {
    case '-':;
    diff = num1 - num2;
    cout<<"\n\nThe difference of Num1 and Num2 is: " << diff;
        break;
    }
    switch (op)
    {
    case '*':;
    prod = num1 * num2;
    cout<<"\n\nThe product of Num1 and Num2 is: " << prod;
        break;
    }
    switch (op)
    {
    case '/':;
    quot = num1 / num2;
    cout<<"\n\nThe quotient of Num1 and Num2 is: " << quot;
        break;
    }




    return 0;
}