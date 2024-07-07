#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};


struct node* createll(struct node* head);
void displayll(struct node* head);
struct node* insertatbegin(struct node* head);
struct node* insertatend(struct node* head);
struct node* deleteatbegin(struct node* head);
struct node* deleteatend(struct node* head);

int main() {
    struct node *head = NULL;
    int choice;

    while (1) {
        system("cls");
        printf("Operations on DLL\n\n");
        printf("1. Create DLL\n");
        printf("2. Display DLL\n");
        printf("3. Insert at Beginning\n");
        printf("4. Insert at End\n");
        printf("5. Delete from Beginning\n");
        printf("6. Delete from End\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                head = createll(head);  
                break;
            case 2:
                displayll(head);
                break;
            case 3:
                head = insertatbegin(head);  
                break;
            case 4:
                head = insertatend(head);  
				break;
            case 5:
                head = deleteatbegin(head);
                break;
            case 6:
                head = deleteatend(head);
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
        printf("\n");
        system("pause");
    }

    return 0;
}

struct node* createll(struct node* head) {
    struct node *newnode;
    struct node *temp = head;  
    
    newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("1 st create node\n");
        return head;
    }

    printf("Enter data for newnode ");
    scanf("%d", &(newnode->data));
    newnode->next = NULL;
    newnode->prev = NULL;

    if (head == NULL) {
        head = newnode; 
    } else {
        
        newnode->next = head;
        head->prev = newnode;
        head = newnode;  
    }

    return head;
}


void displayll(struct node* head) {
    struct node *temp = head;
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct node* insertatbegin(struct node* head) {
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("1 st create node \n");
        return head;
    }

    printf("Enter data to insert at beginning: ");
    scanf("%d", &(newnode->data));
    newnode->next = head;
    newnode->prev = NULL;

    if (head != NULL) {
        head->prev = newnode;
    }

    head = newnode;
    return head;
}

struct node* insertatend(struct node* head) {
    struct node *newnode;
    struct node *temp = head;  

    newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("1 st create the node\n");
        return head;
    }

    printf("Enter data to insert at end: ");
    scanf("%d", &(newnode->data));
    newnode->next = NULL;

    if (head == NULL) {
        newnode->prev = NULL;
        head = newnode;
        return head;
    }

    // Traverse to the end of the list
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Insert newnode at the end of the list
    temp->next = newnode;
    newnode->prev = temp;

    return head;
}

struct node* deleteatbegin(struct node* head) {
    if (head == NULL) {
        printf("List is empty, nothing to delete\n");
        return NULL;
    }

    struct node *temp = head;

    if (head->next != NULL) {
        head = head->next;
        head->prev = NULL;
    } else {
        head = NULL;
    }

    free(temp);
    printf("Node deleted from the beginning\n");

    return head;
}

struct node* deleteatend(struct node* head) {
    if (head == NULL) {
        printf("List is empty, nothing to delete\n");
        return NULL;
    }

    struct node *temp = head;

    // Traverse to the last node
    while (temp->next != NULL) {
        temp = temp->next;
    }

    if (temp->prev != NULL) {
        temp->prev->next = NULL;
    } else {
        head = NULL;
    }

    free(temp);
    printf("Node deleted from the end\n");

    return head;
}

