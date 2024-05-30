#include <stdio.h>
//function declaration 
void swap(int *n1, int *n2);
    
int main()
 {
    int a1, b2;

    printf("Enter first number: ");
    scanf("%d", &a1);

    printf("Enter second number: ");
    scanf("%d", &b2);

    printf("\nBefore Swapping the numbers :\n");
    printf("First number: %d\n", a1);
    printf("Second number: %d\n", b2);

    swap(&a1, &b2);

    printf("After Swapping the numbers:\n");
    printf("First number will be : %d\n", a1);
    printf("Second number will be : %d\n", b2);

    return 0;
}

void swap(int *n1, int *n2) 
{
    int temp;
    temp = *n2;
    *n2 = *n1;
   	*n1 = temp;
}
