#include <iostream>
using namespace std;
int main()
{
     double ClassA, ClassB, ClassC, NumA, NumB, NumC, TotalA, TotalB, TotalC;

     ClassA = 15;
     ClassB = 12;
     ClassC = 9;

     cout << "The price for one ticket of a Class A seat is $15" << endl;
     cout << "How many tickets for Class A do you need?" <<endl;
     cin >> NumA;
     TotalA = ClassA * NumA;

     cout << "The price for one ticket of a Class B seat is $12" << endl;
     cout << "How many tickets for Class B do you need?" <<endl;
     cin >> NumB;
     TotalB = ClassB * NumB;

    cout << "The price for one ticket of a Class C seat is $9" << endl;
     cout << "How many tickets for Class C do you need?" <<endl;
     cin >> NumC;
     TotalC = ClassC * NumC;

    cout << "Total price for all the Class A seats would be: $ " << TotalA << endl;
    cout << "Total price for all the Class B seats would be: $ " << TotalB << endl;
    cout << "Total price for all the Class C seats would be: $ " << TotalC << endl;
    
     



    return 0;
}