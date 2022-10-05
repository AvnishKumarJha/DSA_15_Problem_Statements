// C program To Create And Display Singly Linked List.

#include <stdio.h>
#include <stdlib.h>

struct node *createLinkedList(int);
void dispalyLinkedList(struct node *);

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int n;
    struct node *head;
    printf("Enter the size of linked list : ");
    scanf("%d", &n);

    head = createLinkedList(n);

    dispalyLinkedList(head);

    return 0;
}

struct node *createLinkedList(int n)
{
    int i;
    struct node *head = NULL;
    struct node *newNode, *ptr;
    for (i = 0; i < n; i++)
    {

        newNode = (struct node *)malloc(sizeof(struct node));

        printf("Enter the %d node data : ", (i + 1));
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {

            
            ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
    }
    return head;
}

void dispalyLinkedList(struct node *head)
{
    struct node *ptr;

    
    if (head == NULL)
    {
        printf("The Linked List is empty");
    }
    else
    {
        ptr = head;
        while (ptr != NULL)
        {
            printf("The value of node is %d and their address is %u\n", ptr->data, ptr);
            ptr = ptr->next;
        }
    }
}