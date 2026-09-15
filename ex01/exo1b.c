#include<studio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct node* next;
};

struct node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(newNode == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode_>next = NULL;
    return newNode;
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if(*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtposition(struct Node** head, int data, int position) {
    if(position < 0) {
        printf("Error: Invalid position.\n");
        return;
    }

    struct Node* newNode = createNode(data);

    if(position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* current = *head;
    struct Node* previous = NULL;
    int currentPos = 0;
    while((current != NULL) && (currentPos < position)) {
        previous = current;
        current = current->next;
        currentPos++;
    }

    if(currentPos != position) {
        printf("Error: Invalid position.\n");
        free(newNode);
        return;
    }

    newNode->next = current;
    previous->next = newNode;
}

int searchElement(struct Node **head, int data) {
    structnode* temp = *head;
    int position = 0;
    while(temp != NULL) {
        if(temp->data == data){
           return position;
        }
        temp = temp->next;
        position++;
    }
    return -1;
}

void deleteElement(struct Node** head, int position) {
    if (*head == Null){
        printf("Error: Invalid position.\n");
        return -1;
    }
    if(position <0){
       printf("Error: Invalid position.\n")
       return;
    }

    struct Node* temp = *head;

    if(position == 0){
       *head = temp->next;
       free(temp);
       return;
    }
    struct Node* pre
}
