#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

    const int N = 5; // this limits the random numbers generated to 5
    int randnum; // defining the random number
    int min; //defining the min value for the random number

    srand(time(0));

    for (int i=0;i<N; i++){
        randnum = rand() % 100 ; // the random number only goes to 100
        cout << randnum << "\t";
        if ((i==0) || (min > randnum)) // min has to be the smallest out of all the random numbers
        min = randnum;


    }
    cout << "Min : " << min << endl; 
}



