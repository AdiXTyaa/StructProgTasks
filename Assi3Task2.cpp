#include <iostream>
using namespace std;

int main() {
  int celsius, fahrenheit;
  celsius = 100;
  while (true) {
   
    fahrenheit = 9 * celsius / 5 + 32;

    if (celsius == fahrenheit) {
      break;
    }
    celsius--;
  }
  cout << "The temperature that is the same in both Celsius and Fahrenheit is " << celsius << " degrees.\n";
  return 0;
}
