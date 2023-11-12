#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    double Asquare, Acircle;
    int num1, num2;

    cout<<"Enter First Number: ";
    cin>> num1;
    cout<<"Enter Second Number: ";
    cin>> num2;

    if(num1 != num2){
        Acircle = 3.141592653 * num1 * num1;
        cout<<"\nThe Area of the Circle is: "<<Acircle;
    }else if(num1 == num2){
        Asquare = num1 * num1;
        cout<<"\nThe Area of the Square is: "<<Asquare;
    }
    
    return 0;
}