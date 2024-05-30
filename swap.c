#include <stdio.h>

void swap(int *n1, int *n2) ;
    
int main()
 {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nBefore Swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n\n", num2);

    swap(&num1, &num2);

    printf("After Swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n\n", num2);

    return 0;
}

void swap(int *n1, int *n2) {
    int temp;
    temp = *n2;
    *n2 = *n1;
    
	*n1 = temp;
}
