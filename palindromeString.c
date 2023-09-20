#include<stdio.h>
#include<string.h>
int main()
{
    char chk='t',str[30];
     int len,left,right;

    printf("Enter an String : ");
    scanf("%s",str);

    len=strlen(str);
    left = 0;
    right = len -1;

    while(left<right&&chk=='t')
    {

            if(!(str[left]== str[right]))
            chk='f';
            left++;
            right--;


    }
    if(chk=='t')
    {
    
    printf("It is palindrome number");
    
    }

    else
    {

        printf("It is not palindrome number");
    
    }

    return 0;
}