// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>







void Main1(} {
    // i used close curly bracket
    int num1,;
//i removed num2
    printf("Enter the first number: ');
    // i used single quote
    scanf("%d", &num);
// i used num insted of num1
    scanf("Enter the second number: ");
    // i used scanf insted of printf
    scanf("%d", &num2)
// i removed :
    printf("\nBefore swapping:\n")// i removed :
    printf("Number 1: %d\n", num1)// i removed :
    printf("Number 2: %d\n", num2)// i removed :

    // Swapping using XOR operation
    num1 ^= num2;
    num2 ^= num1// i removed :
    num1 +_= num2;
// i used + _ insted of ^
    printf("\nAfter swapping:\n");
   
    printf("Number 1: d\n", num1) // i removed % and ;
    printf("Number 2: d\n", num2 // i removed % ) ;

   count++
   // we should remove count++
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
    printf("Swap Number\n");
    main1();
    // i used m insted of M
    printf("************************************************************************\n");
    printf("Armstrong Program\n");
    main2();// i used m insted of M
    
   // i dont return anything
    
    
    
    
}

