#include<stdio.h>
#define SIZE 50 

struct student {
    int rollno;
    char name[10];
    float per;
};

// Function declarations
void accept(struct student[], int);
int search(struct student[], int, int);

int main() { 
    struct student recs[SIZE];
    int nor, rno, pos;
    
    printf("Enter the number of records: ");
    scanf("%d", &nor);
    
    // Accept student records
    accept(recs, nor);
    
    printf("Enter the roll number to search: ");
    scanf("%d", &rno);
    
    // Search for the roll number
    pos = search(recs, nor, rno);
    
    if (pos == -1) {
        printf("Search unsuccessful, record with roll number %d not found\n", rno);
    } else {
        printf("Search successful, details are as follows:\n");
        printf("Roll no: %d, Name: %s, Percent: %.2f\n", recs[pos].rollno, recs[pos].name, recs[pos].per);
        printf("Record found after %d comparisons\n", pos + 1);
    }
    
    return 0;
}

// Function to accept student records
void accept(struct student recs[], int nor) {
    int i;
    printf("Enter the records:\n");
    for (i = 0; i < nor; i++) {
        printf("Enter roll number, name and percentage for student %d: ", i + 1);
        scanf("%d %s %f", &recs[i].rollno, recs[i].name, &recs[i].per);
    }
}

// Function to search for a student by roll number
int search(struct student recs[], int nor, int rno) {
    int i;
    for (i = 0; i < nor; i++) {
        if (rno == recs[i].rollno) {
            return i; // Return the index of the found record
        }
    }
    return -1; // Return -1 if the record is not found
}

