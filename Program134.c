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

void InsertLast(PPNODE first, int ino)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *first;

    newn->data = ino;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
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

int Maximum(PNODE first)
{
    int iMax = first->data;

    while (first != NULL)
    {
        if (iMax < first->data)
        {
            iMax = first->data;
        }
        first = first->next;
    }

    return iMax;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertLast(&head, 10);
    InsertLast(&head, 20);
    InsertLast(&head, 80);
    InsertLast(&head, 40);
    InsertLast(&head, 50);
    Display(head);

    iRet = Maximum(head);

    printf("Maximum element is : %d\n", iRet);

    return 0;
}
