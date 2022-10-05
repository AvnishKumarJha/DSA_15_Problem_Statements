// Write a C program to implement stack using array.

#include <stdio.h>
#include <stdlib.h>
int stack[100], choice, n, top, x, i;

void push();
void pop();
void display();

void main()
{
    top = -1;
    printf("\n Enter size of stack[Max=100]\n");
    scanf("%d", &n);

    do
    {
        printf("Menu-\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\nEnter Your Choice-");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;
        }
    } while (choice != 4);
}

void push()
{
    if (top > n - 1)
    {
        printf("\nstack is Full");
    }
    else
    {
        printf("\nEnter Value to be Pushed\n");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top <= -1)
    {
        printf("Stack is empty ");
    }
    else
    {
        printf("\n The Popped Element =%d stack[top]");
        top--;
    }
}

void display()
{
    if (top <= -1)
    {
        printf("\n Stack is Empty");
    }
    else
    {
        printf("\nThe stack elements are-");
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
