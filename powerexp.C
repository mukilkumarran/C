#include <stdio.h>
int main()
{
int base,exponent;
long long result;
printf("Enter the base no.");
scanf("%d",&base);
printf("Enter the exponent");
scanf("%d",&exponent);
while(exponent!=0)
{
result*base=0;
--exponent;
}
printf("Result:"%lld",result);
return 0;
}
