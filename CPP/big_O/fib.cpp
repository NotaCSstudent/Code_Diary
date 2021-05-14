#include <iostream>
using namespace std;

int fib(const int n, int lookupTable[]) {
  if (lookupTable[n] == -1) { // Check if already present
    // Adding entry to table when not present
    if (n <= 1) 
      lookupTable[n] = n;
    else 
      lookupTable[n] = fib(n - 1, lookupTable) + fib(n - 2, lookupTable);
  }
  return lookupTable[n];
}

int main() {
  const int n = 6; // Finding the nth Fibonacci number 
  int lookupTable[n+1]; 
  for (int i = 0; i < n+1; i++)
    lookupTable[i] = -1; // Initializing the look up table to have -1

  cout << fib(n, lookupTable) << endl;
}