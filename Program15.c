#include <stdio.h>
#include <stdbool.h>

bool CheckVowel(char cValue)
{
    if ((cValue == 'A') || (cValue == 'E') || (cValue == 'I') || (cValue == 'O') || (cValue == 'U') || (cValue == 'a') || (cValue == 'e') || (cValue == 'i') || (cValue == 'o') || (cValue == 'u'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter A Character : \n");
    scanf("%c", &ch);

    bRet = CheckVowel(ch);

    if (bRet)
    {
        printf("Given Character is vowel \n");
    }
    else
    {
        printf("Given Character is Not vowel \n");
    }

    return 0;
}