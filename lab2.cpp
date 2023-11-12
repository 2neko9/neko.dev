#include<iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string fname, lname, midI, add, contact;
    double byear;

    cout<<"\nInput Last Name: ";
    cin>>lname;
    cout<<"Input First Name: ";
    cin>>fname;
    cout<<"Input Middle Initial: ";
    cin>>midI;
    cout<<"Input Address: ";
    cin>>add;
    cout<<"Input Contact Number: ";
    cin>>contact;
    cout<<"Input Birth Year: ";
    cin>>byear;

    string fullname = fname +" "+ midI +" "+ lname;
    int age = 2023 - byear;

    cout<<"\n\nFull Name: " << fullname;
    cout<<"\nAddress: " << add;
    cout<<"\nContact Number: " << contact;
    cout<<"\nBirth Year: " << byear;
    cout<<"\nAge: " << age;

    return 0;
}