#include<stdio.h>
 int main()
{
int n,r,sum=0,temp;
    printf("enter the number=");
    scanf("%d",&n);

    temp=n;

while(n>0){

    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
}
    if(temp==sum)
    printf("armstrong  number ");

else
    printf("not armstrong number");

return 0;
}
/*Armstrong number is a number that is equal to the sum of cubes of its digits.
 For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

Let's try to understand why 153 is an Armstrong number.

153 = (1*1*1)+(5*5*5)+(3*3*3)
where:
(1*1*1)=1
(5*5*5)=125
(3*3*3)=27
So:
1+125+27=153*/
