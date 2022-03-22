#include <iostream>
using namespace std;
int main(){
    int low, high, i;
    bool is_prime = true;
    cout << "Enter the where you want the numberto chain begin from: " << endl;
    cin >> low;
    cout << "Enter where you want the number chain to end: " << endl;
    cin >> high;
    cout << "The prime numbers between " << low << " and " << high << " are: " << endl;


    while (low < high) {
        is_prime = true;

        if (low == 0 || low == 1 ) {
            is_prime = false;
        }

        for (i = 2; i <= low/2; ++i){
            if (low % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
    cout << low << ", ";
    ++low;
    }   

    return 0;

}