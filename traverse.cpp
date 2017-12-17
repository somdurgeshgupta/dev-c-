#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int A[100],x,y;
	printf("enter two array size less thn 100");
	scanf("%d", &y);
	printf("enter elements in an array");
	for(x=0; x<y; x++)
	{
		scanf("%d",&A[x]);
	}
	printf("the traversal of an array");
	for(x=0; x<y ; x++)
	{
		printf("%d",A[x]);
	}
}

