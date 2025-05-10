#include <iostream>
using namespace std;

int main() {
    double principal, rate, time, interest, total;

    // Input the principal, interest rate, and time
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the annual interest rate (in percentage): ";
    cin >> rate;
    cout << "Enter the time (in years): ";
    cin >> time;

    // Calculate the simple interest
    interest = (principal * rate * time) / 100;

    // Calculate the total amount
    total = principal + interest;

    // Output the result
    cout << "The total amount after " << time << " years is: " << total << endl;

    return 0;
}
