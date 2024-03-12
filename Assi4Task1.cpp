#include <iostream>
#include <cmath> // To use the pow function
using namespace std;

double wind_chill(double v, double t) {
  // Check if the temperature is valid
  if (t > 10) {

 cout << "Error: Temperature must be less than or equal to 10 degrees Celsius.\n";
    return -1;
  }
  // Calculate the wind chill index using the formula
  double W = 13.12 + 0.6215 * t - 11.37 * pow(v, 0.16) + 0.3965 * t * pow(v, 0.16);
  return W;
}
int main() {
  double v = 5; // Wind speed in m/sec
  double t = 8; // Temperature in degrees Celsius
  double W = wind_chill(v, t); 
  
  cout << "The wind chill index for a wind speed of " << v << " m/sec and a temperature of " << t << " degrees Celsius is " << W << " degrees Celsius.\n";
  return 0;
}

