#include <stdio.h>

void main1() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);  // Read user input
    
    // Check if the number is odd or even
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    
   
}
void main2() {
    int num, reversed = 0, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

 
}
int main(){
    printf("First Program\n");
    printf("************odd or even**************\n");
    main1();
    printf("Second Program\n");
      printf("**************palindrome************\n");
    main2();
    return 0;
}

