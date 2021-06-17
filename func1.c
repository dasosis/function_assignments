//check if two arrays identical

#include<stdio.h>
#define MAXLEN 25

int comparr(int*,int*,int);
int main()
{
    int array1[MAXLEN], array2[MAXLEN];
    int i,n,r;

    printf("How many elements does each array have? ");
    scanf("%d",&n);

    printf("Enter elements of first array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",array1+i);
    }
    printf("Enter elements of second array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",array2+i);
    }
    
    r=comparr(array1,array2,n);

    printf("The retern value is %d meaning they are ",r);
    (r==1) ? printf("identical") : printf("not identical");    
    
    return 0;
}

int comparr (int *m1,int *m2,int l)
{
    int i,r=1;
    for (i = 0; i < l; i++)
    {
        if (*(m1+i)!=*(m2+i)) break;
    }
    if (i<l) r=0;
    return r;
}
