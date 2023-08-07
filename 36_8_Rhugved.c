#include<stdio.h>
void main()
{	
	int array1[20];
	int array2[20];
	int i,j,size1,size2;
	printf("Enter the size of Array 1\n");
	scanf("%d", &size1);
	
	printf("Enter the elements of array 1\n");
	for (i=0;i<size1;i++)
	{
		scanf("%d", &array1);
	}
	
	printf("Enter the size of Array 2\n");
	scanf("%d", &size2);
	
	printf("Enter the elements of array 2\n");
	for(j=0;j<size2;j++)
	{
		scanf("%d", &array2
		);
	}
	
	if (array1[i]==array2[j])
	{
	printf("Result=1");
	}
	else
	{
	printf("Result=0");
	}
}	
