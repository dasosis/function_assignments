//Remove a letter from a string

#include<stdio.h>
#define MAXLEN 25

int delchar(char*,char);
int main()
{
    char string[MAXLEN], letter;
    
    printf("Enter a string ");
    fgets(string,MAXLEN,stdin);
    printf("Enter letter to be removed ");
    scanf("%c",&letter);

    delchar(string,letter);
    puts(string);
}

int delchar(char *str,char x)
{   
    char *str_now;
    
    while (*str!='\0')
    {
        if(*str==x)
        {
            str_now=str;
            while (*str!='\0')
            {
                *str=*(str+1);
                str++;
            }
            str=str_now;
        }
        else str++;                
    }

    return 1;
}
