#include<stdio.h>
int main()
{
    char a[20]="Navneet",c[35];
    char b[20]="Vishwakarma";
    int i,j;

    for(i=0;a[i]!='\0';i++)
    {
        c[i]=a[i];
    }
    for(j=0;b[j]!='\0';i++,j++)
    {

                c[i]=b[j];

    }
    c[i]='\0';

    printf("\nAfter the Concatenation of a and b = %s\n",c);
    printf("Length ofthe string = %d \n",i);

    return 0;
}