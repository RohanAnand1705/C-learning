# Source Code

P = float(input("Enter the principal amount: "))
R = float(input("Enter the rate of interest (in %): "))
T = float(input("Enter the time period (in years): "))

A = P * (1 + R / 100) ** T
CI = A - P

print(f"Compound Interest = ₹{CI:.2f}")
print(f"Total Amount after {T:.2f} years = ₹{A:.2f}")
