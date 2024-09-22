// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>






void Main1() {
int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    // Swapping using XOR operation
    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;

    printf("\nAfter swapping:\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

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
    printf("Swap Number\n");
    Main1();
    printf("************************************************************************\n");
    printf("Armstrong Program\n");
    Main2();
    
    return 0;
    
    
    
    
}