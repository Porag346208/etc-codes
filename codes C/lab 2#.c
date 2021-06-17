#include <stdio.h>
#define size 10
int Stack[size];
int top = -1;
void push(int data)
{
    if(top<size-1)
    {
        if(top<0)
        {
            Stack[0]=data;
            top = 0;
        }
        else
        {
            Stack[top+1]=data;
            top++;
        }
    }
}
void pop()
{
    //int n;
    if(top>=0) // top=5
    {
        //n = Stack[top];
        Stack[top];
        top--;
        //return n;
    }
}
void display()
{
    int i;
    for(i=0; i<=top; i++)
    {
        printf("%d ",Stack[i]);
    }
}
int main()
{
    int i,n,value;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&value);
        push(value);
    }
    display();
    printf("\n");
    int j,m;
    scanf("%d",&m);
    for(j=0; j<m; j++)
    {
        pop();
    }
    display();
    return 0;
}
