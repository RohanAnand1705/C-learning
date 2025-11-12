num1 = int(input("Enter the dividend: "))
num2 = int(input("Enter the divisor: "))

if num2 == 0:
    print("Error! Division by zero is not allowed.")
else:
    result = num1 / num2
    print(f"Division of {num1} by {num2} = {result:.2f}")
