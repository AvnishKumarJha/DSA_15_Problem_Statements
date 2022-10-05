// Write a c program to implement stack using Linked List.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void push(int n);
void pop();
void display();
struct node *head;

int main()
{
    int ch, n;
    do
    {
        printf("\n Menu \n1.Push \n2.Pop \n3.Display \n4.Exit");
        printf("\n Enter your choice-");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\n Enter data to be Pushed\n");
            scanf("%d", &n);
            push(n);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;
        }
    } while (ch != 4);
    return 0;
}

void push(int num)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    if (ptr == NULL)
    {
        printf("\n Can't Push on stack as stack full");
    }
    else
    {
        if (head == NULL)
        {
            ptr->data = num;
            ptr->next = head;
            head = ptr;
        }
    }
}

void pop()
{
    int num;
    struct node *ptr;
    if (head == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        num = head->data;
        ptr = head;
        head = head->next;
        free(ptr);
    }
}

void display()
{
    int i;
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Stack is empty");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d", ptr->data);
            ptr = ptr->next;
        }
    }
}