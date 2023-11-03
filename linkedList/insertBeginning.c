#include <stdio.h>
struct Node{
    int data;
    struct Node *next;
};
void insertAtHead(struct Node** head, int new_data)
{
    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = new_data; // Link data part
        newNode->next = *(head); // Link address part
        *(head) = newNode;          // Make newNode as first node
    }

}
void print(struct Node* head)
{
        struct Node* temp ;
        temp = head;
        while(temp != NULL)
        {
            printf("%d " , temp -> data);
            temp = temp -> next;
        }
}
int main()
{
       struct Node* head = (struct Node*)malloc(sizeof(struct Node));
       head -> data = 10;
       struct Node* second = (struct Node*)malloc(sizeof(struct Node));
       second -> data = 20;
       struct Node* third = (struct Node*)malloc(sizeof(struct Node));
       third -> data = 30;
       head -> next = second;
       second -> next = third;
       third -> next = NULL;
       printf("Before insertion : ");
       print(head);
       insertAtHead(&head , 5);
       printf("\nAfter insertion : ");
       print(head);
}