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

void InsertLast(PPNODE first, int no)
{
}

void InsertAtPos(PPNODE first, int no, int ipos)
{
}

void DeleteFirst(PPNODE first)
{
}

void DeleteLast(PPNODE first)
{
}

void DeleteAtPos(PPNODE first, int ipos)
{
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

int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 11);
    Display(head);

    InsertFirst(&head, 21);
    Display(head);

    printf("Count is : %d", Count(head));

    return 0;
}