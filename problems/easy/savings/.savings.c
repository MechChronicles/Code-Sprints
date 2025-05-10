#include <stdio.h>

int main() {
    double principal, rate, time, interest, total;

    // Input the principal, interest rate, and time
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Calculate total amount
    total = principal + interest;

    // Output the result
    printf("The total amount after %.2lf years is: %.2lf\n", time, total);

    return 0;
}
