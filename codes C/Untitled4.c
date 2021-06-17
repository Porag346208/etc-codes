#include<stdio.h>
int main()
{
    int digitsum=15;
    char Mohidur_array[15]="MohidurRahman";
    int n,i;
    printf("How many?\n");
    scanf("%d",&n);
    while(n--)
    {
        char first_name[15];
        char last_name[15];
        printf("Enter First name\n");
        scanf("%s",&first_name);
        printf("Enter Last Name\n");
        scanf("%s",&last_name);
        if(first_name[0]==Mohidur_array[0])
        {
            printf("Matched\n");
            printf("%s ",first_name);
            printf("%s\n",last_name);
        }
    }
}
