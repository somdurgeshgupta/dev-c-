#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[50], b[50], size1, size2, size, i, j, k, merge[100];
	cout<<"Enter Array 1 Size : ";
	cin>>size1;
	cout<<"Enter Array 1 Elements : ";
	for(i=0; i<size1; i++)
	{
		cin>>a[i];
	}
	cout<<"Enter Array 2 Size : ";
	cin>>size2;
	cout<<"Enter Array 2 Elements : ";
	for(i=0; i<size2; i++)
	{
		cin>>b[i];
	}
	for(i=0; i<size1; i++)
	{
		merge[i]=a[i];
	}
	size=size1+size2;
	for(i=0, k=size1; k<size && i<size2; i++, k++)
	{
		merge[k]=b[i];
	}
	cout<<"Now the new array after merging is :\n";
	for(i=0; i<size; i++)
	{
		cout<<merge[i]<<" ";
	}
	getch();
}
