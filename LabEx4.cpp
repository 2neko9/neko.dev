#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string fname, lname, midI, add, contact, remarks, gender;
    double byear;
    char let, sex;

    cout<<"\nSeatNumber: 31";
    cout<<"\nNueva Ecija University of Science and Technology\n";
    cout<<"Sumacab Campus\n\n";

    cout<<"Input Last Name: ";
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
    cout<<"Input letter: ";
    cin>>let;
    cout<<"Input Sex: ";
    cin>>sex;

    

    string fullname = fname +" "+ midI +" "+ lname;
    int age = 2023 - byear;

    cout<<"\n\nFull Name: " << fullname;
    cout<<"\nAddress: " << add;
    cout<<"\nContact Number: " << contact;
    cout<<"\nBirth Year: " << byear;
    cout<<"\nAge: " << age;
    if(let == 'S')
    {
        remarks = "Scholar";
        cout<<"\nRemarks: " << remarks;
    }
    if(sex == 'M')
    {
        gender = "Male";
        cout<<"\nSex: " << gender;
    } 
        else if(sex == 'F')
        {
            gender = "Female";
            cout<<"\nSex: " << gender;
        }
    
    return 0;
}
