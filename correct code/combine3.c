#include <stdio.h>
#include <string.h>

void main1() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // Error: Unsafe, better to use fgets in modern C

    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
  printf("\n");
}

void main2() {
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

int main(){
        printf("First Program\n");
    printf("************Revers String**************\n");
    main1();
    printf("Second Program\n");
      printf("**************Swap Number************\n");
    main2();
    return 0;
}