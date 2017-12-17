#include<stdio.h>
int main()
{
	int array[100], position, c, n, value;
	printf("Enter no. of elements in an array");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(c=0; c<n; c++)
	scanf("%d",&array[c]);
	printf("enter the location where u wnt to insert an element\n");
	scanf("%d", &position);
	printf("enter the value to insert an element:\n");
	scanf("%d",&value);
	for(c=n-1; c>=position-1; c--)
	array[c+1]=array[c];
	array[position-1]=value;
	printf("\nresultant array is\n");
	for(c=0; c<=n; c++)
	printf("%d\n",array[c]);
	return 0;
}
