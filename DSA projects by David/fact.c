#include<stdio.h>
void factorial();
int main()
{
	fact();
	return 0;
}

    void fact()
    {
    	int i,n,f=1;
    	printf("enter a number to calculate its factorical");
    	scanf("%d",&n);
    	for(i=1;i<=n;i++)
    	{
    		f=f*i;
    	
	}
	printf("factorical of the num %d=%d/n",n,f);
}
	
