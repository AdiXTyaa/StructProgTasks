#include <iostream>
using namespace std;
int main(){
 double weight_pounds;
 double weight_in_kg = weight_pounds / 2.2 ;
 double METS;
 double minutes;
 
 cout << "Enter your weight in pounds: ";
 cin >> weight_pounds;
 cout << "Enter the number of mets spent in the activity: "; 
 cin >> METS ;
 cout << "Enter the number of minutes spent in the activity: ";
 cin >> minutes;
 double calories;
 double weight_kg = weight_pounds / 2.2;
    calories = 0.0175 * METS * weight_kg;
 cout <<"Total number of calories burned: "<< calories * minutes << endl;


return 0;
}