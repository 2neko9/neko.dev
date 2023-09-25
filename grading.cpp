#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int fgrade,sgrade, ave;
    cout<<"\n\n Grade Calculator";
                                    
    cout<<"\n\nEnter your first grade: ";
    cin >> fgrade;
    cout<<"Enter your second grade: ";
    cin >> sgrade;
    
    ave = (fgrade + sgrade) / 2;
    cout<<"\n Your Average Grade is: " << ave;                             
    
    if(ave >= 95){
    cout<<"\n\n You passed";
    cout<<"\n Congrats";
    cout<<"\n Your Grade letter is: A\n\n";
    }
    else if(ave >= 85){
    cout<<"\n\n You passed";
    cout<<"\n Pwede na";
    cout<<"\n Your Grade letter is: B\n\n";
    }
    else if(ave <= 75){
    cout<<"\n\n Pasang awa";
    cout<<"\n Mag aral ka pa boi";
    cout<<"\n Your Grade letter is: C\n\n";
    }

    return 0;
}