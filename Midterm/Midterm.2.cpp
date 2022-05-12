#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int getSum(int, int, int);


int main()
{
    ifstream ifs;
    ofstream ofs;

    int sc1, sc2, sum;

    string name;

    float average;

    ifs.open("student.txt");

    if (! ifs)
    {
        cout << "The Files chosen is not found"<< endl;
        exit(0);
    }

    ofs.open("studentscore.txt");

    if( ! ofs)
    {
        cout << "File cannot be opened"<< endl;
        exit(0);
    }

    for (int i = 0; i < 10; i++ )
    {
        ifs >> name >> sc1 >> sc2;
        if(! ifs)
            break;
            sum = sc1 +sc2;
            average = sum / 2.0;

            cout << "The name of the student is : "<< name << " The first score is : " << sc1 << " and the second score is : " << sc2 << " Sum : " << sum << " average : " << average << endl;
            ofs << name << " "<< sum << " "<< average << endl;

    }

    ifs.close();
    ofs.close();


}
int getSum(int s1, int s2)
{
    return s1 + s2;
}