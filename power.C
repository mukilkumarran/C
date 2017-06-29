#include <stdio.h>
main
{
int base,exponent;
long long result=1;
printf("Enter the base number",/n);
scanf("%d",&base);
printf("Enter the exponent number",/n);
scanf("%d",&exponent);
while(exponent!=0)
{
result=base*base;
--exponent;
}
printf("Power of the number is:%ll",result);
return 0;
}

