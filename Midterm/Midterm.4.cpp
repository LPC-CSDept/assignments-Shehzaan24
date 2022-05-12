#include <iostream>
#include <ctime>
using namespace std;

int getRandum()
{
    srand (time(NULL));
    return rand()%101;

}
int getRandum(int n1)
{
    srand( time (NULL));
    return rand() % (101-n1)+n1;

}
int getRandum(int n1, int n2)
{
    srand (time(NULL));
    return rand()%(n2-n1)+n1;

}
int main()
{
    cout <<getRandum()<< endl;
    cout <<getRandum(50)<< endl;
    cout<< getRandum(80,90)<< endl;
    
}