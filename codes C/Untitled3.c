#include<stdio.h>
int main()
{
    int digitsum=13;
    char Badhan_array[13]="BadhanDeb";
    int n,i;
    scanf("%d",&n);
    while(n--)
    {
        char first_name[13];
        char last_name[13];
        scanf("%s",&first_name);
        scanf("%s",&last_name);
        if(first_name[0]==Badhan_array[0])
        {
            printf("%s ",first_name);
            printf("%s\n",last_name);
        }
    }
}
    int j,m;
    for(j=0; j<=top; j++)
    {
        pop();
        if(Stack[top]==62)
            break;
    }
    printf("\n");
    display();

    return 0;
}
