#include <iostream>

using namespace std;

// Function to take input
void takeInput(double &height, double &weight) {
    cout << "Enter your height (in centimeters): ";
    cin >> height;
    cout << "Enter your weight (in kilograms): ";
    cin >> weight;
}

// function output result
void outputResult(double height, double weight) {
    double bmi = weight / ((height / 100.0) * (height / 100.0));

    if (bmi < 18.5)
        cout << "Based on your height and weight, you are: Underweight" << endl;
    else if (bmi >= 18.5 && bmi <= 24.9)
        cout << "Based on your height and weight, you are: Normal" << endl;
    else
        cout << "Based on your height and weight, you are: Overweight" << endl;
}

int main() {
    double height, weight;
    takeInput(height, weight);
    outputResult(height, weight);

    return 0;
}
