#include <iostream>
using namespace std;

int main() {

  double height, weight;
  
  cout << "Enter height (cm): ";
  cin >> height;
  
  cout << "Enter weight (kg): "; 
  cin >> weight;

  double bmi = weight / ((height/100.0) * (height/100.0));

  if(bmi < height/250.0) {
    cout << "Underweight" << endl;

  } else if(bmi >= height/250.0 && bmi <= height/230.0) {
      
    cout << "Normal" << endl;

  } else {
    cout << "Overweight" << endl;
  }


}