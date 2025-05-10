# Simple Interest Calculation
def simple_interest(principal, rate, time):
    interest = (principal * rate * time) / 100
    total_amount = principal + interest
    return total_amount

# Input data
principal = float(input("Enter the principal amount: "))
rate = float(input("Enter the annual interest rate (in percentage): "))
time = float(input("Enter the time (in years): "))

# Calculate total amount
total = simple_interest(principal, rate, time)

# Output result
print(f"The total amount after {time} years is: {total:.2f}")
