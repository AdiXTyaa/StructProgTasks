#include <iostream>
using namespace std;

class Money {
  private:
    int dollars;
    int cents;

  public:
    Money() {
      dollars = 0;
      cents = 0;
    } //constructor

    void setDollars(int d) {
      dollars = d;
    } // Mutator Fn

    void setCents(int c) {
      cents = c;
    }

    int getDollars() {
      return dollars; 
    } // Accesor Fn

    int getCents() {
      return cents;
    }

    double getAmount() {
      return dollars + 0.01 * cents; 
    } // Utility fn
};

int main() {
  Money m1, m2;

  m1.setDollars(10);
  m1.setCents(50);

  m2.setDollars(15);
  m2.setCents(95);

  cout << "M1 = $" << m1.getDollars() << "." << m1.getCents() << endl;  
  cout << "Amount = " << m1.getAmount() << endl;

  cout << "M2 = $" << m2.getDollars() << "." << m2.getCents() << endl;
  cout << "Amount = " << m2.getAmount() << endl;

  return 0;
}
