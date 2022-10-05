// Write a C Program to writes Student Data into a file Using Structure.

// Program to store record of student (rollno, name, address) in a file using structure.

#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rollno;
    char name[20],address[50];
}s;

int main()
{
    FILE *fp;
    fp=fopen("Student.txt","w");

    if (fp == NULL)
    {
        printf("Error in opening file");
    }

    else
    {
        printf("\n Enter Student info- ");
        scanf("%d %s %s",&s.rollno,s.name,s.address);

        fprintf(fp,"%d\n%s\n%s",s.rollno,s.name,s.address);
        printf("\n Record Stored in file Succesfully");
        fclose(fp);
    }
    
return 0;
}