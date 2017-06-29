#include <stdio.h>
main
{
long n;
int count;
printf("Enter the interger number",\n);
scanf("%lld",&n);
while(n != 0)
n/=10;
++count;
}
printf("Number of Digits:%d",count);
}
