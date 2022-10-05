// Write a c program implement linear search algorithm and find the position of given elements.

// Write a Program in Linear search find position of element 30 using linear search algorithm in given sequence.
// 10 5 20 25 8 30 40

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100], search, c, n;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    printf("Enter %d integer (s)\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Enter number to search\n");
    scanf("%d", &search);

    for (c = 0; c < n; c++)
    {
        if (array[c] == search)
        {
            printf("%d is Present at location %d", search, c);
            break;
        }
    }

    if (c == n)
    {
        printf("%d isn't present in the array", search);
    }

    return 0;
}