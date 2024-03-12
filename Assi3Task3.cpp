#include <iostream>
using namespace std;
int main() {
    cout << "Enter 5 numbers between 1 and 30 separated by spaces: ";

    for (int i = 0; i < 5; ++i) {
        int number;
        cin >> number;

        if (number >= 1 && number <= 30) {
            for (int j = 0; j < number; ++j) {
               cout << "*";
            }
          cout << endl;
        }
    }
}
