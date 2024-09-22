// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>




int factorial(int n) {
    if (n == 0 return 1;  // Error 1: Missing closing parenthesis
    return n * factorial(n - 1)  
}

void Main1() {
    int num;
    printf("Enter a number: ");
    scanf("%d" &num);  // Error 2: Missing ',' between 'd' and 'num'

    // Check for non-negative input
    if (num <= 0) { // Error 3:  logical error '<=' instead of '<'
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factoria1(num));  // Error 4: incorrect function name 'factoria1' instead of 'factorial'
    }

}





void Main2() {

    int num, original, remainder, result = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d" &num); // error: missing ',' 
    original = num // error: missing semicolon 
    // Count the number of digit
    while (original != 0} { // error : close the condition using '}' instead of ')'
        original /= 10;
        ++n;
    }
    original = num;
    // Calculate the sum of the cubes of digits
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }
    // Check if the number is an Armstrong number
    if (result = num) { // error: '=' instead of '=='
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
} // error: extra '}'
    

}

int main(){
    printf("Factorial Program\n");
    Main1();
    printf("************************************************************************\n");
    printf("Armstrong Program\n");
    Main2();
    
    return 0;
    
    
    
    
}