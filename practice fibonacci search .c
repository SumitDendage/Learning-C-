#include <stdio.h>
#define SIZE 50

// Function declaration
void fib_series(int nt);




int main() {
    int nt;
    
    printf("Enter the number of terms: ");
    scanf("%d", &nt);
    
 
    fib_series(nt);
    
    return 0;
}

void fib_series(int nt) {
    int i;
    int curr_term = 0, next_term = 1;
    
    printf("Fibonacci series up to %d terms:\n", nt);
    for (i = 0; i < nt; i++) {
        printf("%d\t", curr_term);
        next_term = curr_term + next_term;
        curr_term = next_term - curr_term;
    }
   
}

