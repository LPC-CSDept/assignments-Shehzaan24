#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    const int 
    WEIGHT_MIN = 0,
    WEIGHT_MAX = 20,
    DISTANCE_MIN = 10,
    DISTANCE_MAX = 3000;

    float 
    packageWeight,
    distance,
    total_charges;

    cout << "Express the weight of the package in kg\n";
    cin >> packageWeight;

    if (packageWeight <= WEIGHT_MIN || packageWeight > WEIGHT_MAX)
    {
        cout 
        << "The package weight has to be\n"
        << "more than 0 kg and less than 20 kg.\n"
        << "Use a different input!\n"
        << endl;

    }
    else
    {
       cout << "Distance?\n";
       cin >> distance;
       
       if (distance < DISTANCE_MIN || distance > DISTANCE_MAX)

       {
           cout 
           << "The distance must be between 10 and 3000 miles. \n"
           << "Restart the program\n"
           << endl;
        
           
       }
       else
       {
        if (packageWeight <= 2)
        total_charges = (distance / 500) * 1.10;
        else if (packageWeight > 2 && packageWeight<= 6)
        total_charges = (distance / 500) * 2.20;
        else if (packageWeight > 6 && packageWeight <= 10)
        total_charges = (distance / 500) * 3.70;
        else if (packageWeight > 10 && packageWeight <= 20)
        total_charges = (distance / 500) * 4.80;

        cout << setprecision (2) << fixed
        << "Price $ \n"
        << total_charges
        << "Over the distance of:"
        << distance
        << "miles\n"
        << "Total weight of:"
        << packageWeight
        << "kg.\n"
        <<endl;
       }

    }

return 0;
}
