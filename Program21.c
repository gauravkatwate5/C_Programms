#include <stdio.h>

int main()
{
    char ch[30];

    printf("Enter Your Name : \n");
    scanf("%[^\n]s", ch);

    printf("Name : %s", ch);

    return 0;
}