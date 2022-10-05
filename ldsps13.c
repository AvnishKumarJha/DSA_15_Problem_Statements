// Write a c program to copy contents of one file to another file.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1 = NULL, *fp2 = NULL;
    char ch=0;

    // Create the source file 
    fp1 = fopen("Source.txt","w");
    if (NULL == fp1)
    {
        printf("fopen (\"Source.txt\", \"w\") failed\n");
        return -1;
    }

    printf("Enter the data\n");
    while ((ch = getchar()) != EOF)
    {
        putc(ch,fp1);
    }

    fclose (fp1);

    // Copy the contents of source file to Destination file.
    fp2 = fopen ("Destination.txt","w");
    if (NULL == fp2)
    {
        printf("fopen (\"Destination.txt\", \"w\") failed\n");
        return -2;
    }

    fp1 = fopen("Source.txt","r");
    if (NULL == fp1)
    {
        printf("fopen (\"Source.txt\", \"r\") failed\n");
        return -3;
    }
    
    while ((ch = getc(fp1)) != EOF)
    {
        putc (ch, fp2);
    }
    
    fclose(fp1);
    fclose(fp2);

    // Display the contents of destination file
    printf("Destination file content is :\n");
    fp2 = fopen ("Destination.txt","r");
    if (NULL == fp2)
    {
        printf("fopen (\"Destination.txt\", \"r\") failed\n");
        return -4;
    }

    while ((ch = getc(fp2)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp2);
    
return 0;
}