#include<stdio.h>
main
{
int n,reversedInteger=0,originalInteger,remainder;
printf("Enetr the integer");
scanf("%d",&n);
originalinteger=n;
while(n!=0)
{
remainder=n%10;
reversedInteger=reversedInteger*10 + remainder;
n/=10;
}
if (originalInteger == reversedInteger)
printf("%d is the Palindrome",originalInteger);
else
printf("%d is not a Palindrome",originalInteger);
return 0;
}


