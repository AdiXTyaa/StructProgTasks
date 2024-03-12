#include <iostream>
using namespace std;

class Pizza {
  public:
    string size;   
    int toppings;
    
    Pizza(string s) {
      size = s;
      toppings = 0;
    }
    
    void setToppings(int t) {
      toppings = t;  
    }
    
    void showDescription() {
      cout << size << " pizza with " << toppings << " toppings" << endl;
    }
    
    double getPrice() {
      double basePrice;
      if(size == "Small") basePrice = 10;
      else if(size == "Medium") basePrice = 14;
      else basePrice = 17;

      return basePrice + 2*toppings; 
    }
};

int main() {
  Pizza p1("Small");
  p1.setToppings(3);
  p1.showDescription();
  cout << "Price: $" << p1.getPrice() << endl;

  Pizza p2("Medium");
  p2.setToppings(5); 
  p2.showDescription();
  cout << "Price: $" << p2.getPrice() << endl;
  
  return 0;
}