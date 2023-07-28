#include <stdio.h>
#include <stdbool.h>

bool ChkVowel(char *str)
{
    bool Flag = false;

    while (*str != '\0')
    {
        if ((*str == 'a') || (*str <= 'A') || (*str == 'e') || (*str <= 'E') || (*str == 'i') || (*str <= 'I') || (*str == 'o') || (*str <= 'O') || (*str == 'u') || (*str <= 'U'))
        {
            Flag = true;
        }
        str++;
    }

    return Flag;
}

int main()
{
    char str[30];

    printf("Enter A String : \n");
    scanf("%[^\n]s", str);

    if (ChkVowel(str))
    {
        printf("contain vowel");
    }
    else
    {
        printf("cannot contain vowel");
    }

    return 0;
}