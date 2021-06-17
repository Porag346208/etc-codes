#include<stdio.h>

int main()
{
    int a[20],i,x,n,freq;
    printf("Enter number of elements :\n");
    scanf("%d",&n);

    printf("Enter array elements :");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);

    printf("Enter element to search :");
    scanf("%d",&x);
    freq=0;
    for(i=0;i<n;++i){
       if(a[i]==x){
        freq++;
       }

    }



        printf(" %d is found %d times",x,freq);


    return 0;
}
