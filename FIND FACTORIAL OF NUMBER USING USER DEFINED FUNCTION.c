#include<stdio.h>
int x(int number)
{
	int y2=1;
	
	if(number<=1)
	{
		return 1;
	}
	else
	{
	    y2 = number * x(number-1);
	}
	
	return y2;
	
}
int main()
{
	int n;
	printf("ENTER THE FACTORIAL NUMBER = ");
	scanf("%d",&n);
	
	printf("FACTORIAL = %d",x(n));
	
	return 0;
}





