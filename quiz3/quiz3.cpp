#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
    double num1, num2, num3;
    double summation;
    double average;

    srand(time(0));

    num1 = rand () % 100;
    cout << "Random number 1: "<< num1 << endl;

     num2 = rand () % 100;
    cout << "Random number 2: " << num2 << endl;

    num3 = rand () % 100;
    cout << "Random number 3: " << num3 << endl;

    cout << "Press enter to see the sum of all the three random numbers!" <<endl;
    cin.get();

    cout << "Adding numbers : " << num1 << " + " << num2 << " + " << num3 << endl;

    summation = num1 + num2 + num3;

    cout << "The summation of the three random numbers is: " << summation <<endl;

    cout << "Press enter to see the average of the three numbers!" << endl;
    cin.get();

    average = (num1 + num2 + num3) / 3;

    cout << "The average of the three random numbers is: " << setprecision(5) << average << endl;

    return 0;

    



}