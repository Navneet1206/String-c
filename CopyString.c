#include<stdio.h>
int main()
{
    int i,j,k;
    char a[15]="Navneet";
    char c[30];

    for(i=0;a[i]!='\0';i++)
    {
        c[i]=a[i];
    }
    
    
    c[i]='\0';
    

    
    printf("\nc = %s \nIt is copied by \na = %s",c,a);

    return 0;
}