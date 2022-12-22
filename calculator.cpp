#include<stdio.h>
int main()
{
	int a,b,x;
	printf("Enter the first and second number::");
	scanf("%d%d",&a,&b);
	x=a+b;
	printf("The addition is %d\n",x);
	x=a-b;
	printf("The subtraction is %d\n",x);
	x=a*b;
	printf("The multiplication is %d\n",x);
	x=a/b;
	printf("The division is %d\n",x);
	return 0;
	
}
