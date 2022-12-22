#include<stdio.h>
void check();
int main()
{
	check();
	return 0;
}

     void check()
     {
     	int n;
     	printf("enter any number");
     	scanf("%d",&n);
     	if(n%2==0)
     	{
     		printf("%d is even number",n);
     		}
     		
     		else
     		{
     			printf("%d is odd number",n);
			 }
	 }
