#include <stdio.h>

void ConvertChar(char cValue)
{
    if ((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c", cValue + 32);
    }
    else if ((cValue >= 'a' && (cValue <= 'z')))
    {
        printf("%c", cValue - 32);
    }
    else
    {
        printf("Enter Only Character \n");
    }
}

int main()
{
    char ch = '\0';

    printf("Enter A Character : ");
    scanf("%c", &ch);

    ConvertChar(ch);

    return 0;
}