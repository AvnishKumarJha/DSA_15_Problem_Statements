// Write a C Program to sort the given numbers using bubble sort.

#include <stdio.h>
#include <stdlib.h>

void bubblesort(int a[],int n)
{
    int i,j,temp;
    for ( i = 0; i < n; i++)   // counts no of passes
    {
        for ( j = 0; j < n-i; j++)   // counts no of steps
        {
            if (a[i]>a[j+1])
            {
                //swap values
                temp=a[j];
                a[j]=a[j++];
                a[j+1]=temp;
            }
        }
    }
}

void display(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
}

int main()
{
    int i,n,a[20];

    printf("Enter array size\n");
    scanf("%d",&n);
    printf("\nEnter array elements\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nArray elements before sorting\n");
    display(a,n);
    bubblesort(a,n);
    printf("\nArray elements after sorting\n");
    display(a,n);
return 0;
}