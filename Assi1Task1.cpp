#include <iostream>
using namespace std;
int main(){
  double const ounces_per_metric_ton = 35273.92;

  double weightin_ounces;
  cout << "Enter the weight of the box of cereal in ounces: " ;

  cin >> weightin_ounces;

  double weight_in_metricton = weightin_ounces / ounces_per_metric_ton;

  cout << "The weight of the box of cereal is " << weight_in_metricton << " metric tons" << endl;

  int numofboxes = ounces_per_metric_ton / weightin_ounces ;

  cout << "Number of boxes to yeild a ton : "<<numofboxes<<" boxes ." 
  
  <<endl;
} 

