
#include <iostream>
using namespace std;

int main() {
    double principal, yearlyDeposit, rate, totalAmount;
    int years;

    // Input initial savings, yearly deposit, interest rate, and number of years
    cout << "Enter the initial principal amount: ";
    cin >> principal;
    cout << "Enter the yearly deposit amount: ";
    cin >> yearlyDeposit;
    cout << "Enter the annual interest rate (in percentage): ";
    cin >> rate;
    cout << "Enter the number of years: ";
    cin >> years;

    // Initialize total savings
    totalAmount = principal;

    // Calculate savings over the years with yearly deposits
    for (int i = 1; i <= years; i++) {
        totalAmount += yearlyDeposit;  // Add yearly deposit
        totalAmount *= (1 + rate / 100); // Apply interest
    }

    // Output the result
    cout << "The total savings after " << years << " years is: " << totalAmount << endl;

    return 0;
}
