#include <stdio.h>

// Function to add two numbers
int addNumbers(int x, int y) {
    return x + y;
}

// Function to subtract two numbers
int subtractNumbers(int x, int y) {
    return x - y;
}

// Function to calculate (a + b - c)
int calculate(int a, int b, int c) {
    int sum = addNumbers(a, b);
    int result = subtractNumbers(sum, c);
    return result;
}

int main() {
    int a, b, c, ans;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    ans = calculate(a, b, c);
    printf("Result = %d\n", ans);
    
    return 0;
}
