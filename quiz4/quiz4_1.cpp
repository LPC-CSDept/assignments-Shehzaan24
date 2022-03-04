#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int AreaRectangle, AreaTriangle, AreaCircle, length, width, radius, base, height, area;
    const double PI = 3.14;

    cout << "Geometry Calculator"<< endl; // Title of the program
    cout << right << "1. Calculate the Area of a Circle "  << endl; //Area of circle
    cout << right << "2. Calculate the Area of a Rectangle"<< endl; // Area of rectangle
    cout << right << "3. Calculate the Area of a Triangle" << endl; // Area of triangle
    cout << right << "4. To quit program\n";

    while (1==1)
    {
        cout << "Choose one of the four options please: " <<endl;
        cin >> area;
        cout << endl;

        switch (area)

        {
            case 1:
            cout << "Enter radius of the circle" << endl;
            cin >> radius;

           
            AreaCircle = PI * pow(radius, 2.0);
            cout << "Area of the circle with the given radius " << radius << " is " << AreaCircle << endl;

            break;


            case 2:
            cout << "Enter the length of the rectangle: " <<endl;
            cin >> length;
            cout << "Now enter the width of the rectangle: "<< endl;
            cin >> width;
            
            AreaRectangle = width * length;
            cout << "The area of the rectangle with the length " << length << " and width " << width << " is " << AreaRectangle << endl;
            break;

            case 3:
            cout << "Enter the base of the Triangle" << endl;
            cin >> base;
            cout << "Enter the height of the Triangle" << endl;
            cin >> height;
            
            AreaTriangle = 0.5 * base * height;
            cout << "Area of the triangle with the base " << base << " and height " << height << " , the area is " << AreaTriangle << endl;
            break;

            case 4:
            cout << "Quit, restart the program :)"<< endl;


            


    

        }








    }






    return 0;
}