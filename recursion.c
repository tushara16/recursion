#include<stdio.h>
int sumofdigits(int num);
main()
{
	int num,sum;
	printf("enter the number:");
	scanf("%d",&num);
	sum=sumofdigits(num);
	printf("Sum of digits of %d = %d",num,sum);
	return 0;
}
int sumofdigits(int num)
{
	if(num == 0)
        return 0;  
    else
    return ((num % 10) + sumofdigits(num / 10));
}
