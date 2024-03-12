#include <iostream>
using namespace std;
int main() {
    int dollars;
    cout << "Enter the number of dollars: ";
    cin >> dollars;

    int initiallybought_bars = dollars;
    int coupons = dollars;

    while (coupons >= 7) {
        int bars_from_coupons = coupons / 7;
        initiallybought_bars += bars_from_coupons;
        int remaining_coupons = coupons % 7;
        coupons = bars_from_coupons + remaining_coupons;
    }

    cout << "Total chocolate bars: " << initiallybought_bars << endl;
    cout << "Leftover coupons: " << coupons << endl;


}
