#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int num1, num2, dif, prod;
    cout<<"C++ program that will show the difference of the two numbers if the first number is bigger than the other.\nThen the product if the second number is equal or bigger than the other.\n\n";
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    if(num1 > num2){
        dif = num1 - num2;
        cout<<"The Difference of num1 and num2 is: "<<dif;
    }else if(num2 >= num1){
        prod = num1 * num2;
        cout<<"The Product of num1 and num2 is: "<<prod;
    }

    return 0;
}