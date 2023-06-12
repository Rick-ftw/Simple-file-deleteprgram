#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1;
    char x1[10];
    char x2[10];
    char x3[10];
    int a;
    file1 = fopen("delete.txt","w+");
    fprintf(file1,"%s %s %s","You","are","Best");
    rewind(file1);
    fscanf(file1,"%s %s %s",x1,x2,x3);

    printf("%s %s %s\n",x1,x2,x3);

    fseek(file1,0,SEEK_END);
    int b = ftell(file1);
    printf("Location of filepointer : %d\n",b);
    fclose(file1);

    do
    {
        printf("To you want to the file press 3 or press any other number : ");
        scanf("%d",&a);
        if (a == 3)
        {
            printf("File deleted");
            remove("delete.txt");
        }
        else
        {
            printf("File not deleted\n");
        }
       
    } while (a != 3);

    return 0;
}
