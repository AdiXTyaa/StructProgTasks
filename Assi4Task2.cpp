#include <iostream>
using namespace std; 

const double MIN_CHARGE = 2.0;
const double HOURLY_RATE = 0.5;  
const double MAX_CHARGE = 10.0;

double calculateCharges(double hours) {
  double charge; 
  
  if(hours <= 3) {
    charge = MIN_CHARGE;  
  }
  else {
    charge = MIN_CHARGE;
    double extraHours = hours - 3;
    charge += extraHours * HOURLY_RATE;  
    if(charge > MAX_CHARGE) {
      charge = MAX_CHARGE;
    }
  }

  cout << "The charge is: $" << charge << endl;  
    
  return charge;
}

int main() {
  
  double totalReceipts = 0;
  double hours;
  char choice;
  double charge; // declare charge variable
  
  do {
    cout << "Enter hours parked: ";
    cin >> hours;

    charge = calculateCharges(hours); //set charge
    
    totalReceipts += charge;
    
    cout << "Total receipts so far: $" << totalReceipts << endl;
    
    cout << "Do you want to enter another customer (y/n)? "; 
    cin >> choice;
  } while(choice == 'y' || choice == 'Y');
  
  return 0;  
}