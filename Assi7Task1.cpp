#include <iostream>
using namespace std;

class Fraction {
    private:
        int numerator;
        int denominator;
    
    public:
        Fraction(int num=0, int den=1) {
            numerator = num;
            denominator = den;
        }
        
        void setNumerator(int num) {
            numerator = num;
        } // Mutator Function
        
        void setDenominator(int den) {
            denominator = den; 
        } // Mutator Funtion
        
        double getDecimalValue() {
            return (double)numerator / denominator;  
        } // Ye wala Member Funtion  Hai
        
        void printReducedForm() {
            int gcd = findGCD(numerator, denominator);
            
            if (gcd > 1) {
                numerator /= gcd;
                denominator /= gcd;
            } // num gcd se divide hota he if not  1 coz 1 hoga to already simplified.
            
            cout << numerator << "/" << denominator << endl;
        } // Ye bhi member function
        
    private:
        int findGCD(int a, int b) {
            if (b == 0) 
                return a;
            return findGCD(b, a%b); 
        } // ye gcd dhundega b chota number h and a bada 
};

int main() {
    Fraction f(20, 60);
    
    f.printReducedForm(); // Prints 1/3
    
    f.setNumerator(30);
    f.setDenominator(100);
    
    cout << f.getDecimalValue(); // Prints 0.3
    
    return 0;
}