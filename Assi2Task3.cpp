#include <iostream>
using namespace std;

int main() {
  int num1, den1, num2, den2, resultNum, resultDen;
  char op;
  
  cout << "Enter first fraction in the form a/b: ";
  cin >> num1 >> op >> den1;
  
  cout << "Enter second fraction in the form c/d: "; 
  cin >> num2 >> op >> den2;

  cout << "Enter operation (+, -, or *): ";
  cin >> op;
  
  if(op == '+') {
    resultNum = (num1*den2 + num2*den1); 
    resultDen = (den1 * den2);
  }
  else if(op == '-') {
    resultNum = (num1*den2 - num2*den1);
    resultDen = (den1 * den2);
  }
  else if(op == '*') {
    resultNum = (num1 * num2);
    resultDen = (den1 * den2);
  }
  
  cout << "The result = " << resultNum << "/" << resultDen;
  
  return 0;
}