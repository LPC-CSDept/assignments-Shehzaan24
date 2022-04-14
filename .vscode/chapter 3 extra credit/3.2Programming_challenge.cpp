#include <iostream>
using namespace std;
int main()
{
    int Males, Females, TotalStudents, Mperc, Fperc;

    cout << "Write the number of male students in your class" << endl;
    cin >> Males;

    cout << "Write the number of female students in your class"<< endl;
    cin >> Females;

    TotalStudents = Males + Females;

    cout << "The total number of students in the class is " << TotalStudents << endl;

    Mperc = (Males/TotalStudents)*100;
    Fperc = (Females/TotalStudents)*100;

    cout << "The total percentage of Male students is " << Mperc << endl;
    cout << "The total percentage of Female students is " << Fperc << endl;
    
     


    return 0;

}