#include <iostream>
using namespace std;

// The function below returns the GCD of two numbers x and y
 
int euclideanAlgorithm(int x, int y) {
  if (x == 0)
    return y;
  return euclideanAlgorithm(y % x, x);
}

int main() {
  int x = 252, y = 105;
  cout << "The GCD of " << x << " and " << y << " is equal to "<< euclideanAlgorithm(x, y) << endl;
  
  x = 10, y = 15;
  cout << "The GCD of " << x << " and " << y << " is equal to "<< euclideanAlgorithm(x, y) << endl;
  
  x = 77, y = 2;
  cout << "The GCD of " << x << " and " << y << " is equal to "<< euclideanAlgorithm(x, y) << endl;
}