#include <stdio.h>


int pal(const char *str) 
{
    int len = 0;

    
    while (str[len] != '\0')
    {
        len++;
    }

    int start = 0;
    int end = len - 1;

    while (start < end) 
    {
        if (str[start] != str[end]) 
        {
            return 0; 
        }
        start++;
        end--;
    }
    return 1; 
}

int main()
{
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    if (pal(input))
    {
        printf("%s is a palindrome.\n", input);
    } else 
    {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}
