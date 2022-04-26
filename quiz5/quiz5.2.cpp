#include <iostream>
using namespace std;
int main()
{
  const int min = 0,
            max = 10;

  int N, M;
  int result =1;
  cout << "Enter a base number : "<< endl;
  cin >> N;
  cout << "Enter the exponent power: "<< endl;
  cin >> M;
  result = N;
  if ( N < max && N > min){
    for (int i = 1; i < M; i++)
      {
        result*=N;
        cout << result << endl;
      }
    }
  


  return 0;
}