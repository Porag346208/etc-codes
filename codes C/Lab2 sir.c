#include <stdio.h>
#define SIZE 10

int stack[SIZE];

int top = -1 ;

void push (int value) // value = 12
{
    if (top < SIZE-1) // top=-1 & SIZE=10 [condition = TRUE]
    {
        if (top<0)  // top=-1 [condition = False]
        {
            stack[0] = value; // value = 12
            top = 0;     // top = 0 means Stack[top]
        }

        else
        {
            stack[top+1] = value ; // for first value of top = 0; Now top=1 & value =2

            top++;     // Now top = 2;
        }
    }

    else
    {

        printf ("stack is overflow");

    }
}

int pop()

{
    if (top >= 0)
    {
        int n =  stack[top]; // top = 3
        top--; // top = 2;
        return n;
    }
}


void display()

{
    int i;
    for (i=0; i<=top; i++)

    {
        printf ("%d ", stack[i]);

    }

}

int main()
{
    push(12); // data insertion
    push(-7);
    push(2);
    push(-3);
    display();
    printf("\n");
    pop();  // data deleted
    display();
    return 0;
}
