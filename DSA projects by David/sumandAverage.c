#include <stdio.h>

	
		int main()
		{
			int i,n,sum=0,numbers;
			float average;
			
			printf("Enter the number to how many humber you want to print :");
			scanf("%d",&n);
			printf("Enter the number of element one by one: ");
			for(i=0;i<n;i++)
			{ 
			   scanf("%d",&numbers);
			   sum =sum  +  numbers;
			   
			}
			average = sum/n;
			printf("%d is sum \n",sum);
			printf("%.2f is average",average);
		
	
	return 0;
	
	}

