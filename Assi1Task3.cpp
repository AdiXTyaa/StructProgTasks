#include <iostream>
using namespace std;

int main() {
    int seconds, hours, minutes;

    cout << "Enter number of seconds: ";
    cin >> seconds;

    hours = seconds / 3600;
    seconds = seconds % 60;

    minutes = seconds / 60;
   

    cout  << " seconds is equivalent to: "
         << hours << " hours, "
         << minutes << " minutes and "
         << seconds << " seconds" << endl;

    return 0;
}
