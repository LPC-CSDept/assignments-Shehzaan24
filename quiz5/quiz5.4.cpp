#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream outputFile; // To write on the file 
    

    // Variables
    int empID, num_emp;
    string emp_name, dep_name;
    double salary;

    // Get the number of employees
    cout << "How many employees do we have?" << endl;
    cin >> num_emp;
    
    cout << "Hello today we are going to take records of all employees on this file!"<< endl;

    //Opening the file :)
    outputFile.open("employee.txt");

    // Now to get all the employee information and running the loop

    for (int count = 1; count <= num_emp; count++) // for loop that repeats until we get to the num of employees and stops running.
    {
        cout << "Enter Employee Number " << count << "s information please:"<< endl;
        cout << "Please write it in this order specifically: Employee ID Emp Name Department Salary"<< endl;
        cin >> empID >> emp_name >> dep_name >> salary;

        outputFile << empID << emp_name << dep_name << salary << endl;

    }

    outputFile.close();
    cout << "Employee Data Written to employee.txt"<< endl;

    return 0;
}

