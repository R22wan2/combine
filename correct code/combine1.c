// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>




int factorial(int n) {
    if (n == 0) return 1;  // Base case: 0! = 1
    return n * factorial(n - 1);  // Recursive case
}

void Main1() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  // Read user input

    // Check for non-negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d.\n", num, factorial(num));
    }
   

}





void Main2() {
    int num, original, remainder, result = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;
    while (original != 0) {
        original /= 10;
        ++n;
    }
    original = num;
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

  
}

int main(){
    printf("Factorial Program\n");
    Main1();
    printf("************************************************************************\n");
    printf("Armstrong Program\n");
    Main2();
    
    return 0;
    
    
    
    
}