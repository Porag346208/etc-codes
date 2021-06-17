#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct Node *head;
void insert(int num1)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = num1;
    temp -> next = head;
    head = temp;
}
void print ()
{
   struct node* temp = head;
   printf("The Number is : ");
   while(temp != NULL)
   {
         printf(" %d",temp -> data );
         temp = temp-> next;

   }

printf(" \n");
}
void delete(int y)
{
    struct node* temp1 = head;
    if(y==1)
    {
        head = temp1->next;
        free(temp1);
    }
    else
    {
        int i;
        for(i=0;i<y-2;i++)
        {
            temp1 = temp1-> next;

        }
         struct node* temp2 = temp1->next;
        temp1->next=temp2->next;
        free(temp2);

}
}
int main()
{
    head = NULL;
    printf("Enter the number of Elements ?\n");
    int i,a,num1,y;
    scanf("%d",&a);
    for(i=0; i<a ; i++)
    {
        printf("Enter number %d \n",i+1);
        scanf("%d",&num1);
        insert(num1);
        print();

    }
      printf("Delete a Number: \n");
        scanf("%d",&y);
        delete(y);
        print();

}
