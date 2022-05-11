#include <iostream>
#include <ctime>

using namespace std;

void getRandum(int &n1, int &n2, int &n3)
{
    srand(time(0));

    n1 = rand()%10;
    n2 = rand()%10;
    n3 = rand()%10;

}

int FindMin (int n1, int n2, int n3)
{
    int min = 0;
    if (n1 < n2)
    {
        min = n1;

    }
    else
    {
        min = n2;
    }

    if (min < n3)
    {
        return min;
    }
    else
    {
        return n3;
    }


}
void Result(int n1, int n2, int n3, int min)
{
    cout << " number 1 = " << n1 << " and number 2 = " << n2 << " and number 3 = " << n3 << endl;

    cout << "Minimum is "<< min << endl;

}

int main()
{
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    getRandum(n1,n2,n3);

    cout << n1 << " and "<< n2 << " and " << n3 << endl;
    int min = FindMin(n1,n2,n3);
    Result(n1,n2,n3,min);

    return 0;

}