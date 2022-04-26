#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream inputFile;
    
  // Variables
    int empID, num_emp, number, count;
    string emp_name, dep_name;
    double salary, total, average;



    cout << "We are going to read all the information from the employee file!"<< endl;

    inputFile.open("employee.txt");

    // Uing a loop to open the file multiple times and read it 

    while (inputFile >> count)
    {
        cout << empID << emp_name << dep_name << salary<< endl;
    }

    // closing the file
    inputFile.close();


    return 0;








}