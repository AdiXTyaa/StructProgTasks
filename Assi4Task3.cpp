#include <iostream>

using namespace std;

// Function to take input
void takeInput(double &pounds, double &ounces) {
    cout << "Enter weight in pounds: ";
    cin >> pounds;
    cout << "Enter weight in ounces: ";
    cin >> ounces;
}

// Function to calculate equivalent weight in kilograms and grams
void calculateWeight(double pounds, double ounces, double &kilograms, double &grams) {
    kilograms = (pounds + ounces / 16) / 2.2046;
    grams = kilograms * 1000;
}

// Function to output the result
void outputResult(double pounds, double ounces, double kilograms, double grams) {
    cout << "Weight in pounds and ounces: " << pounds << " lbs " << ounces << " oz" << endl;
    cout << "Equivalent weight in kilograms and grams: " << kilograms << " kg " << grams << " g" << endl;
}

int main() {
    char choice;

    do {
        double pounds, ounces, kilograms, grams;
        takeInput(pounds, ounces);
        calculateWeight(pounds, ounces, kilograms, grams);
        outputResult(pounds, ounces, kilograms, grams);

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
