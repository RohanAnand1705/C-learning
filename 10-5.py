P = float(input("Enter the principal amount: "))
R = float(input("Enter the rate of interest (in %): "))
T = float(input("Enter the time period (in years): "))

SI = (P * R * T) / 100

print(f"Simple Interest = ₹{SI:.2f}")
