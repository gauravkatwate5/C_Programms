#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

int Count(PNODE first)
{
    int iCnt = 0;

    while (first != NULL)
    {
        iCnt++;
        first = first->next;
    }

    return iCnt;
}

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d |->", first->data);
        first = first->next;
    }

    printf("NULL\n");
}

int SearchFirstOcc(PNODE first, int ino)
{
    int iCnt = 1, ipos = 0;

    while (first != NULL)
    {
        if (first->data == ino)
        {
            ipos = iCnt;
        }
        iCnt++;
        first = first->next;
    }

    return ipos;
}

int main()
{
    PNODE head = NULL;
    int iNo = 0, iRet = 0;

    InsertFirst(&head, 10);
    InsertFirst(&head, 20);
    InsertFirst(&head, 30);
    InsertFirst(&head, 40);
    InsertFirst(&head, 50);
    InsertFirst(&head, 30);
    InsertFirst(&head, 70);
    InsertFirst(&head, 80);
    Display(head);

    printf("Count is : %d\n\n", Count(head));

    printf("Enter The Element To Serch First Occurance of That  Number : \n");
    scanf("%d", &iNo);

    iRet = SearchFirstOcc(head, iNo);

    printf("First occurence of given number is : %d", iRet);

    return 0;
}