#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Function declarations
struct node *createll(struct node*);
struct node *mergell(struct node*, struct node*);
void displayll(struct node*);

int main() {
    struct node *head1 = NULL, *head2 = NULL, *head3 = NULL;
    
    printf("Create linked list 1\n");
    head1 = createll(head1);
    printf("Create linked list 2\n");
    head2 = createll(head2);
    
    head3 = mergell(head1, head2);
    
    
     system("cls");
    
    printf("Linked list 1 is \n");
    displayll(head1);
    printf("\nLinked list 2 is \n");
    displayll(head2);
    printf("\nMerged linked list 3 is \n");
    displayll(head3);
    
    return 0;
}

struct node* createll(struct node *head) {
    struct node *newnode, *temp;
    int i, no_nodes;
    
    printf("Enter the number of nodes: ");
    scanf("%d", &no_nodes);
    printf("Enter the nodes with data in ascending order\n");
    
    for (i = 0; i < no_nodes; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data for new node: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        
        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    
    return head;
}

void displayll(struct node *temp) {
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

struct node* mergell(struct node *head1, struct node *head2) {
    struct node *head = NULL, *newnode, *temp;
    
    while (head1 != NULL && head2 != NULL) {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->next = NULL;
        
        if (head1->data < head2->data) {
            newnode->data = head1->data;
            head1 = head1->next;
        } else {
            newnode->data = head2->data;
            head2 = head2->next;
        }
        
        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    
    while (head2 != NULL) {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->next = NULL;
        newnode->data = head2->data;
        head2 = head2->next;
        temp->next = newnode;
        temp = newnode;
    }
    
    while (head1 != NULL) {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->next = NULL;
        newnode->data = head1->data;
        head1 = head1->next;
        temp->next = newnode;
        temp = newnode;
    }
    
    return head;
}

