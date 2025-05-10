#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, time, amount;

    // Input the principal, interest rate, and time
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the annual interest rate (in percentage): ";
    cin >> rate;
    cout << "Enter the time (in years): ";
    cin >> time;

    // Convert the interest rate to a decimal
    rate = rate / 100;

    // Calculate the future value using the compound interest formula
    amount = principal * pow(1 + rate, time);

    // Output the result
    cout << "The future value of the investment is: " << amount << endl;

    return 0;
}
