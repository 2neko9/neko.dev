#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int AttenScore, SeatScore, ReciScore, QuizScore, LabScore, TermScore;
    float total;

    cout<<"\t\t\tGrade Calculator\n\n";
    cout<<"Your Grades will be compute based on the following: \n";
    cout<<"Attendance: 10%\n";
    cout<<"SeatWorks: 15%\n";
    cout<<"Recitations: 10%\n";
    cout<<"Quizzes: 20%\n";
    cout<<"Laboratory Exercises: 25%\n";
    cout<<"Term Exam: 20%\n\n";

    cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n";
    cout<<"Enter your scores: ";
    cout<<"\nAttendance:";
    cin>>AttenScore ;
    cout<<"SeatWorks:";
    cin>>SeatScore ;
    cout<<"Recitations:";
    cin>>ReciScore ;
    cout<<"Quizzes:";
    cin>>QuizScore ;
    cout<<"Laboratory Exercises:";
    cin>>LabScore ;
    cout<<"Term Exam:";
    cin>>TermScore ;
    
    total = (AttenScore * 0.1) + (SeatScore * 0.15) + (ReciScore * 0.1) + (QuizScore * 0.2) + (LabScore * 0.25) + (TermScore * 0.2);
    cout<<"\n\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n";
    cout << "Total Percentage: " << total << "\n";
    cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n";

cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n";
    if (total >= 98)
    {
        cout << "Your Grade: 1.00\n";
    }
    else if (total >= 95)
    {
        cout << "Your Grade: 1.25\n";
    }
    else if (total >= 92)
    {
        cout << "Your Grade: 1.50\n";
    }
    else if (total >= 89)
    {
        cout << "Your Grade: 1.75\n";
    }
    else if (total >= 85)
    {
        cout << "Your Grade: 2.00\n";
    }
    else if (total >= 82)
    {
        cout << "Your Grade: 2.25\n";
    }
    else if (total >= 80)
    {
        cout << "Your Grade: 2.50\n";
    }
    else if (total >= 77)
    {
        cout << "Your Grade: 2.75\n";
    }
    else if (total >= 75)
    {
        cout << "Your Grade: 3.00\n";
    }
    else
    {
        cout << "Your Grade: 5.00\n";
    }
cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n";







    return 0;
}