//Write a program to access dynamically allocated memory as an one dimensional array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *array;
    int n,i;  
    printf("How many elements in the array? ");
    scanf("%d",&n);
    array=(char*)malloc(n*sizeof(char));
    for (i = 0; i < n; i++)
    {
        printf("Element %d\n",i);
        scanf(" %c",(array+i));
    }
    
    for (i = 0; i < n; i++)
    {
        printf("Element %d -> %c\n",i+1,*(array+i));
    }
    free(array);
    return 0;
}
