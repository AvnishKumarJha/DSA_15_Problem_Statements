// Write a c program to insert an element into Queue and to delete an element from queue.

// C programming code for Queue. This  program will  Insert and Delete elements in Queue.

#include <stdio.h>
#define size 5

int queue[size];
int rear=-1;
int front=-1;

void insert();
void delete();
void display();

void main()
{
    int choice,i=0;
    while (i >=0)
    {
        printf("\n 1) Insert element in queue");
        printf("\n 2) Delete element in queue");
        printf("\n 3) Display all element of  queue");
        printf("\n 4) EXIT");

        printf("\n Enter Your choice:");
        scanf("%d",&choice);
        printf("\n-----------------------------------------------");

        switch (choice)
        {
        case 1:
        insert();
            break;
        
        case 2:
        delete();
            break;

            case 3:
            display();
            break;

        default:
        printf("\n Enter valid choice...");
        }
    }
}

void insert()  //insert element in queue
{
    int item;

    if (rear == size-1)
    {
        printf("\n QUEUE OVERFLOW...");
    }
    else
    {
        if (front == -1)
        {
            front=0;
        }
        printf("\n insert element in queue:");
        scanf("%d",&item);
        rear=rear+1;
        queue[rear]=item;
    }
}

void delete() //delete element in queue
{
    if (front == -1)
    {
        printf("\n  QUEUE UNDERFLOW");
    }
    else
    {
        printf("\nElement deleted from queue is:%d",queue[front]);
        if (front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front = front+1;
        }
    }
}

void display() // display elements of queue.
{
    int i;
    if (front == -1)
    {
        printf("\n QUEUE IS EMPTY...");
    }
    else
    {
        printf("\n QUEUE is: \n");
        printf("\n");
        for ( i = front; i <=rear; i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}