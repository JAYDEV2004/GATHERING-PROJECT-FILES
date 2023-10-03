#include<stdio.h>
int x1(int x[], int n)
{
	int i, addition=0;
	
	for(i=0;i<n;i++)
	{
		addition = addition + x[i];
	}
	return addition;
}
int main()
{
	int n,x_sum;
	printf("ENTER THE ARRAY SIZE = ");
	scanf("%d",&n);
	
	int x[n],i;
	
	for(i=0;i<n;i++)
	{
		printf("INDEX NUMBER =X[%d]",i);
		scanf("%d",&x[i]);
	}
	x_sum=x1(x,n);
	
	printf("\n");
	printf("ALL THE ARRAY ELEMENTS SUM = %d",x_sum);
}