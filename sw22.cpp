#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    char choice;

    cout<<"SeatNumber: 31";
    cout<<"\nSeatWork number: 22";
    cout<<"\n\n\t\tSimple Q and A program. \n";
    cout<<"\nWhat do you call a 2D shape in geometry, having 4 sides and 4 corners.\nIt's two sides meet at right angles? \n";
    cout<<"a - RHOMBUS\n";
    cout<<"b - PARALLELOGRAM\n";
    cout<<"c - RECTANGLE\n";
    cout<<"d - TRAPEZIUM\n";
    cout<<"\nInput your answer here :: ";
    cin>>choice;

    switch (choice)
    {
    case 'A': case 'a':
        cout<<"\nYour answer is Letter A which is incorrect.\n";
        cout<<"The correct answer is Letter C - RECTANGLE.\n";
        break;
    case 'B': case 'b':
        cout<<"\nYour answer is Letter B which is incorrect.\n";
        cout<<"The correct answer is Letter C - RECTANGLE.\n";
        break;
    case 'C': case 'c':
        cout<<"\nYour answer is Letter C which is correct.\n";
        cout<<"Congrats!!!\n";
        break;
    case 'D': case 'd':
        cout<<"\nYour answer is Letter D which is incorrect.\n";
        cout<<"The correct answer is Letter C - RECTANGLE.\n";
        break;
    default:
        cout<<"\nYour answer is invalid.\n";
        break;
    }
    
   return 0;
}
