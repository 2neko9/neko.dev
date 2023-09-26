#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int sum;
    cout<<"This program will compute and display the sum and the average of 615,512 and 48.\n\n";
    sum = 615 + 512 + 48;
    cout<<"The sum is: "<<sum;
    float average = sum / 3;
    cout<<"\nThe average is: "<<average;

    return 0;
}
