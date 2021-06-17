#include <stdio.h>
#include <stdlib.h>
typedef struct datalist
{
    int data;
    struct datalist *next;
}Node;

Node *head;

void insert(Node *s, int data)
{
    while(s -> next !=0)
    {
        s = s -> next;
    }
    s -> next = (Node*)malloc(sizeof(Node));
    s -> next -> data = data;
    s -> next -> next = NULL;
}

void deletedata(Node *s, int data)
{
    while(s -> next !=0)
    {
        if(s -> next -> data == data)
        {
            s -> next = s -> next -> next;
            break;
        }
        s = s-> next;
    }
}

void display(Node *s)
{
    while(s -> next !=0)
    {
        printf("%d ",s -> next -> data);
        s=s->next;
    }
}

int main()
{
    head = (Node*)malloc(sizeof(Node));
    head -> next = NULL;

    int n,i,x;
    printf("How much elements do you want to take : ");
    scanf("%d",&n);
    printf("Please enter elements no. : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        insert(head,x);
    }
    display(head);

    printf("\n");

    int m,j,y;
    printf("How much elements do you want to delete : ");
    scanf("%d",&m);
    printf("Please enter elements no : ");
    for(j=0; j<m; j++)
    {
        scanf("%d",&y);
        deletedata(head,y);
    }
    display(head);

    return 0;
}
