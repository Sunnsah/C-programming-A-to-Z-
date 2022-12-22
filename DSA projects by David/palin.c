#include<stdio.h>
void palindrome();
int main()
{
	palindrome();
	return 0;
}
 
      void palindrome()
      {
      	int r=0,rem,temp,n;
      	printf("enter an integer:");
      	scanf(":%d",&n);
      	temp=n;
      	while(n!=0)
      	{
      		rem=n%10;
      		r=r*10+rem;
      		n=n/10;
		  }
		  if(r==temp)
		  printf("%d is a palindrome number",temp);
		  else
		  printf("%d is not a palindrome num",temp);
	  }
