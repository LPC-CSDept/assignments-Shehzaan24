#include <iostream>
using namespace std;
int main()
{
    //Variables to store information
    double hourlyRate = 0;
    double overtimePay = 0;
    double regularPay = 0;
    double overallPay = 0;
    int hoursWorked = 0;
    int overtimeHours = 0;

    //Get hourly wage

    cout << "Please enter hours worked: ";
    cin >> hoursWorked;
    cout << "Please enter rate per hour:";
    cin >> hourlyRate;

    //Calculate overtime wage and hours

    if(hoursWorked > 40) {
        overtimeHours = hoursWorked - 40;
        hoursWorked = 40; //regular hours
        overtimePay = overtimeHours * (1.5 * hourlyRate);




    }
 regularPay = hoursWorked * hourlyRate;
 overallPay = regularPay + overtimePay;

cout << "Hours worked: " << hoursWorked  << endl;
cout << "Hourly Rate: " << hourlyRate << endl;
cout << "Regular Pay: " << regularPay << endl;
cout << "Overtime Pay: " << overtimePay << endl;
cout << "Ovetime Hours: " << overtimeHours << endl;
cout << "Overall Pay: " << overallPay << endl;

return 0;

}