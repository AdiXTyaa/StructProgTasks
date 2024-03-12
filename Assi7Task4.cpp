#include <iostream>
using namespace std;
// Structure to hold a temperature in Kelvin
struct Temperature {
   double kelvin; 
};
// Set temperature value from given Kelvin  
void setTempKelvin(Temperature &t, double k) {
   t.kelvin = k; 
}

// Convert Celsius to Kelvin and set in structur
void setTempCelsius(Temperature &t, double c) {
   t.kelvin = c + 273.15;
}
// Convert Fahrenheit to Kelvin and set in structure
void setTempFahrenheit(Temperature &t, double f) {
   t.kelvin = (f - 32) * (5.0/9.0) + 273.15; 
}
// Get Celsius value from Kelvin temp in structure 
double getTempCelsius(Temperature t) {
   return t.kelvin - 273.15;  
}
// Get Fahrenheit value from Kelvin temp in structure
double getTempFahrenheit(Temperature t) {
   return (t.kelvin - 273.15) * (9.0/5.0) + 32;
}
// Test Conversion Functions
int main() {
   Temperature t1, t2, t3;
   
   setTempCelsius(t1, 25.0);
   cout << getTempFahrenheit(t1) << endl;

   setTempFahrenheit(t2, 212.0);
   cout << getTempCelsius(t2) << endl;    
   
   setTempKelvin(t3, 300.0);
   cout << getTempFahrenheit(t3) << endl;

   return 0;
}