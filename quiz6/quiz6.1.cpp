#include <iostream>
using namespace std;

void swapTwoValues(int n1, int n2)
{
    int temp;

    cout <<"PLease enter 2 integers"<< endl;
    cin >> n1 >> n2;

    cout << "Before swapping integer n1 = " << n1 << " and integer n2 = " << n2 << endl;

    temp = n1;

    n1 = n2;

    n2 = temp;

    cout << "After the swap n1 = " << n1 << " and n2 is "<< n2 << endl;

}

void swapTwoValues(float f1, float f2)
{
    int temp;

    cout << "Plwease enter two float numbers"<< endl;

    cin >> f1 >> f2;

    cout << "The numbers before the swap are" << f1 << " and "<< f2<< endl;

    temp = f1;

    f1= f2;

    f2 = temp;

    cout << "After swap f1 and f2 are :" << f1 << " "<< f2<< endl;


}

int main()
{
    int n1, n2;
    float f1, f2;
    swapTwoValues(n1, n2);
    swapTwoValues(f1, f2);

    return 0;
}