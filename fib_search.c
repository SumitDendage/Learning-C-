#include <stdio.h>
#define SIZE 50 

struct student {
    int rollno;
    char name[10];
    float per;
};

// Function declarations
void accept(struct student [], int);
int search(struct student [], int, int);

// Global variable to count comparisons
int comp_count = 0;

int main() {
    struct student recs[SIZE];
    int nor, rno, pos;

    printf("Enter the number of records: ");
    scanf("%d", &nor);
    accept(recs, nor);

    printf("Enter the roll number to search: ");
    scanf("%d", &rno);

    pos = search(recs, nor, rno);
    if (pos == -1) {
        printf("Record with roll number %d not found\n", rno);
    } else {
        printf("Search successful. Details of record are:\n");
        printf("Roll number: %d, Name: %s, Percentage: %.2f\n", recs[pos].rollno, recs[pos].name, recs[pos].per);
        printf("Record found after %d number of comparisons\n", comp_count);
    }

    return 0;
}

void accept(struct student recs[], int nor) {
    int i;
    printf("Enter the records of students in ASC order by roll number\n");
    for (i = 0; i < nor; i++) {
        printf("Enter the roll number, name and percentage: ");
        scanf("%d %s %f", &recs[i].rollno, recs[i].name, &recs[i].per);
    }
}

int search(struct student recs[], int nor, int rno) {
    int f1 = 0, f2 = 1, index, prev_index = 0;

    // Finding the smallest Fibonacci number greater than or equal to 'nor'
    while (f2 < nor) {
        int temp = f2;
        f2 = f1 + f2;
        f1 = temp;
    }

    f1 = f2 - f1;  // f1 is now the (n-1)'th Fibonacci number
    f2 = f2 - f1;  // f2 is now the (n-2)'th Fibonacci number

    while (f2 >= 0) {
        index = prev_index + f2;
        comp_count++;

        if (index >= nor) {
            f2 = f1;
            f1 = f1 - f2;
            continue;
        }

        if (rno == recs[index].rollno) {
            return index;
        } else if (rno < recs[index].rollno) {
            f2 = f1;
            f1 = f1 - f2;
        } else {
            prev_index = index;
            int temp = f2;
            f2 = f1;
            f1 = temp - f1;
        }
    }

    return -1;
}

