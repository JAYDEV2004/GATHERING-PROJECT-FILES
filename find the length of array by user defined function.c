#include<stdio.h>
void x(int array[],int all_sizeof)
{
	int x1 = all_sizeof/sizeof array[0];
	
	printf("length of array is : %d",x1);
}
int main()
{
	int array[]={1,2,2,3,4,6,7,8,9,10,11,12,15,50,16,1,17,18};
	x(array,sizeof(array));
	
	return 0;
}