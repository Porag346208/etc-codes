#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int stack[SIZE];
int top = -1;
void push (int value)
{
    if (top < SIZE - 1)
    {
        if(top < 0)
        {
            stack[0] = value;
            top = 0;
        }
        else
        {
            stack[top + 1] = value;
            top++;
        }
    }
    else
    {
        printf ("stack is overflow\n");
    }
}
int pop ()
{
    if (top >= 0)
    {
        int n = stack[top];
        top--;
        return n;
    }
}
void display ()
{
    int i;
    printf("Stack is: ");
    for (i = 0; i <= top; i++)
    {
        printf ("%d ", stack[i]);
    }
    printf("\n\n");
}
int main ()
{
    int x;
    for(int i=0; i<3; i++)
    {
        printf("Enter Number %d: \n",i+1);
        scanf("%d",&x);
        push (x);
    }
    display ();
    pop (1);
    printf("After Pop: \n");
    display ();
    return 0;
}
