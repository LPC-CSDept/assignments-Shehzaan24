#include <iostream>
using namespace std;
int main()
{
    double mealCharge = 88.67;
    double mealTax = mealCharge * (6.75 / 100);
    double tip = (mealCharge + mealTax) * (20.0 / 100);
    double totalBill = mealCharge + mealTax + tip;
   
   
    cout << "\nMeal cost: $ " << mealCharge << endl;
    cout << "Meal Tax: $ " << mealTax << endl;
    cout << "Meal Tip: $ " << tip << endl;
    cout << "Total Bill: $ " << totalBill << endl;

return 0;


}